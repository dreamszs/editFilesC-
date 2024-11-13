# editFilesC
tutorial to read / write files with c++

# How to run a c++ program for noobs:

for macOS you either need clang ( brew install llvm ) this will put clang in the normal installation path on M1 mac chips you can check which default path your device uses via this command ( brew --prefix ) make sure it looks similar to this: /opt/homebrew or for intel /usr/local after this all works you would either compile the program using this command in the project terminal:

 g++ filename.cpp -o main 

filename = whatever the file name is.
g++ = compile it.
-o = make a name for the executable.
main = the name you named it via the -o command.

# What did I do?
c++ has different libraries one of them being called <fstream> which basically is a library that reads / writes information on a file using built in parameters.
You can see the full list of whats possible with the library here: https://www.w3schools.com/cpp/cpp_ref_fstream.asp
