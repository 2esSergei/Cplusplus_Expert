#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
  char c;
  string a = "";
  while(c != '0'){
    c = cin.get();
    a += c;
  }
  int x = atoi(a.c_str());
  cout << a << endl << "szam: " << x << endl;
  return 0;
}
