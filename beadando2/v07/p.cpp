#include<iostream>
#include<fstream>
#include<cstdlib>

#include "ss_point.h"
#include "ss_rectangle.h"

using namespace std;

int main(int argc, char* argv[]){
  if(argc != 2){
    cout << "Hibas argumentum, az argumentum egyetlen ervenyes filenevet kell tartalmaznia."<< endl;
    exit(0);
  }
  std::ifstream file(argv[2]);
  int a;
  if(file >> a){
    cout << "Hibas a file tartalma! Kilepes!" << endl;
    std::exit(0);
  }
  cout << "OKE: " << a << endl;
  
  return 0;
}
