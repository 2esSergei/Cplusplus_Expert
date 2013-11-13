#include<iostream>

using namespace std;

int main(){
	int c = (1?0:(1 == 1)?0:1);
	cout << "c erteke: " << c << endl;
	return 0;
}
