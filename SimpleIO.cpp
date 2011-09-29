#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ifstream fileIn;
  ofstream fileOut;
  char content[512];

  fileIn.open("example.txt",ios::in);
  fileOut.open("output.txt",ios::out);

  while (fileIn.good()){
    fileIn.getline(content,512);
    fileOut << content <<endl;
  }
  
  fileIn.close();
  fileOut.close();

  return 0;
}
