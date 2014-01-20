#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){
  ifstream file("a.txt");
  string s="";
  char c;
  int x;
  int ti=0;

  file >> s;
  while(!file.eof()){
    if(file.fail()){
      file.clear();
      file.ignore(256, '\n');
      file >> s;
      continue;
    }
    file >> c;
    if(file.fail()){
      file.clear();
      file.ignore(256, '\n'); 
      file >> s;
      continue;
    }
    file >> x;
    if(file.fail()){
      file.clear();
      file.ignore(256, '\n');
      file >> s;
      continue;
    }


    ti++;
    cout << x << " " << c << " " << s << endl;
    cout << ti << ". belolvasas." << endl;


    file >> s;
  }

  file.close();
  return 0;
}
