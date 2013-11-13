#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main(){
  cout << "Kerem a filet: ";
  string file;
  string temp_str = "";
  char c;
  int strange_count = 0;
  int counter = 0;
  int temp;
  bool lop = 0;
  bool csal = 0;
  cin >> file;
  ifstream FILE(file.c_str());



  while(FILE.good()){
    c = FILE.get();

    if( c != '1' && c != '2' && c != '3' && c != '4' & c != '5' && c != '6' && c != '7' & c != '8' && c != '9' && c != '0' && temp_str !=""){
      temp = atoi(temp_str.c_str());
      temp_str = "";
      if(lop)
        counter -= temp;
      else{
        counter *= temp;
      }
    }
    if(counter<0)
      counter = 0;
    if (csal && c != 'i')
      csal = 0;



    switch (c){
      case 'i':
        if (!csal)
          counter++;
        else
          csal = 0;
        break;
      case 'l':
        csal = 1;
        break;
      case 'I':
        if (counter%2 == 0){
          cout << counter/2 << endl;
          counter = 0;
        }
        else{
          cout << (counter-1)/2 << endl;
          counter = 1;
        }
        break;
      case '1':
        if (counter%2 == 0 && temp_str == "")
          lop = 1;
        else
          if(counter%2 == 0)
            temp_str += 'c';
        break;
      case '0': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
        if(counter%2 == 0)
          temp_str += c;
        break;
      default:
        strange_count++;
    }
  }
  cout << counter/2 << endl;;
  cout << "Egyebek: " << strange_count << endl;
  FILE.close();
  return 0;

}
