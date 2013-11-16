#include<iostream>
#include<cstdlib>

using namespace std;

string* CreateObject(){
  return (0 % 2) == 0 ? NULL : new string;
}


int main(){
  string* obj = CreateObject();
  if(obj){}
  cout << obj;
  delete obj;
  return 0;
}
