#include<iostream>
#include<fstream>
#include<cstdlib>

#include "ss_point.h"
#include "ss_rectangle.h"

using namespace std;

int main(int argc, char* argv[]){
  if(argc != 2){
    cout << "Hibas argumentum, az argumentumnak egyetlen ervenyes filenevet kell tartalmaznia."<< endl;
    exit(0);
  }
  ifstream file;
  file.open(argv[1]);
  if(file.fail()){
    cout << "A file nem letezik: " << argv[1] << endl << "Kilepes." << endl;
    exit(0);
  }
  int a;
  file >> a;
  ss_point* A = new ss_point[a];
  cout << A[0] << endl;
  /*while(file >> *A){
    cout << "oks" << endl;
    //if(file.eof()) break;
    //cout << "Ertek: " << A << endl;
  }*/
  for(int i=0; i<a; i++){
    file >> A[i];
  }
  file.close();
  //cout << "oks2" << endl;
  for(int i=0; i<a; i++)
    cout << "OKE: " << A[i] << endl;
  
  return 0;
}
