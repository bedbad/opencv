#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

Mat image;

static void onMouse( int event, int x, int y, int, void* ){
    if( event == EVENT_LBUTTONDOWN ){
        cout << "You clicked: (" << x << "," << y << ")" << endl;
    }
    else{
        return;
    }
}

int main( int argc, char** argv ){
    image = imread(argv[1], CV_LOAD_IMAGE_COLOR);

    namedWindow( "img", WINDOW_AUTOSIZE );
    setMouseCallback( "img", onMouse, 0 );
    imshow( "img", image );

    waitKey(0);
    return 0;
}
