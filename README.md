Fall 2016
CSE 2040 Group Project (Open CV)
Members: Liandra, Abdul, Zhi, Ilya


### I don't know github readme format ###

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
  
  cmake -D BUILD_EXAMPLES=ON ../
  
 after success
 
  make
  
  make install
i just want to check..
