#include <iostream>

#include <opencv2/calib3d.hpp>
#include <opencv2/highgui.hpp>

int main(int argc, char* argv[]) {

  if(argc != 3){
    std::cerr<< "ERROR: You should pass two filenames.\n";
    return 0;
  }

  cv::Mat leftFrame, rightFrame;

  leftFrame = cv::imread(argv[1], cv::IMREAD_GRAYSCALE);
  rightFrame = cv::imread(argv[2], cv::IMREAD_GRAYSCALE);

  int numDisparities = 144;

  cv::Ptr<cv::StereoBM> sbm;
  sbm = cv::StereoBM::create(numDisparities, 21);

  sbm->setPreFilterCap(31);

  cv::Mat disp;
  cv::Mat disp8;

  sbm->compute(leftFrame, rightFrame, disp);

  double min, max;
  cv::minMaxLoc(disp, &min, &max);
  std::cout << "Max: " << max << " Min: " << min << std::endl;

  disp.convertTo(disp8, CV_8UC2, 255. / (numDisparities - 1));
  cv::imshow("Disparity", disp8);
  cv::waitKey(0);

  return 0;
}
