Fall 2016
opencv code help tutorial

###Handling Git###

!Always Pull Before!

add files or paths to .gitignore to make git ignore them

don't commit trash!

0. Install git

1. go into/create your future parent directory of opencv repo

2. git clone <URL>  where <URL> is address of our team repository

3. After repository is downloaded go to it and make sure it's the same(ls, tree)

4. create a text file named after you and add some text to it

      echo 'it's my first commit!' >>  <NAME>

5. add that to git tracking

      git add <NAME>

6. make a commit

      git commit -m '<NaME> commit'

7. push your commit to master branch

      git push origin master

Note: if you have troubles with our remote repo url  use:

      git remote set-url URL

###Building opencv###

      mkdir build
  
      cd build
  
      cmake -D BUILD_EXAMPLES=ON  ../
      
  (add all needed flags)
  
  Alternatively 
  cmake-gui:
  sources: ../opencv
  build: ../opencv/build
  
  check all needed flags and add your own(BUILD_EXAMPLES)
  
  dont build java, cuda, etc it WILL slow the build!
  
 #####after success######
 
      make 
  (make -jx faster with >=x processors)
  
      sudo make install
 
 ##########TO CHECK THE BUILD############
 
 set needed Environmental variables: LD_LIBRARY_PATH, etc
 
 compile with pkg-config for convienience:
 
     g++ -o out.exe sourcefile `pkg-config --cflags --libs opencv` 
 
