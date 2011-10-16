#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[]){
  int size;
  size = atoi(argv[2]);

  char content[size];
  ifstream myfile;

  myfile.open(argv[1], ios::in);

  while (myfile.good()){
    myfile.getline(content,size);
  }

  myfile.close();

  return 0;
}
