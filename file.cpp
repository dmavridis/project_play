// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("example.txt");
  myfile << "cte" << ","<< "steer"<<std::endl;
  for (int ii = 0; ii < 10 ; ii++){
	myfile << ii <<","<< ii*ii-2 << std::endl;
  }
  myfile.close();
  return 0;
}
