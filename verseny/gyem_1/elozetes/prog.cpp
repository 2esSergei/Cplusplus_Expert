#include<iostream>
#include<fstream>

using namespace std;

int main(){
  cout << "Kerem a filet: ";
  string file;
  cin >> file;
  ifstream FILE(file.c_str());
  while(FILE.good()){
    char c;
    c = FILE.get();
    switch (c){
    case 'a':
      cout << 'x';
      break;
    default:
      if(c != '\n' && c != ' ')
        cout << c;
    }
  }
  FILE.close();
  return 0;

}
