#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main(int argc,char* argv[]){
  int size;
  ofstream myfile;

  size = atoi(argv[2]);
  myfile.open(argv[1]);

  for(int i=0; i<size; i++){
    myfile<<rand();
  }

  myfile.close();  

  return 0;
}
