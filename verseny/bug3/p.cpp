#include<iostream>
#include<cstdlib>

using namespace std;

int* CreateObject(){
  return (rand() % 2) == 0 ? NULL : new int;
}


int main(){
  int* obj = CreateObject();
  if(obj){}
  cout << obj;
  delete obj;
  return 0;
}
