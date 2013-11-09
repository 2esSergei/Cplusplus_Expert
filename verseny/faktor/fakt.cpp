#include<iostream>
#include<cstdlib>

using namespace std;


int faktor(int N, int p){
	//N a szam, p prim ami a szamban van
	int count = 0;
	int a = p;
	for (int i = 1; i<N+1; i++){
		while(i%a == 0){
			a = a*p;
			count++;
		}
		a = p;
		cout << i << endl;
	}
	return count;
}

int main (int argc, char* argv[]){
	int count = faktor(atoi(argv[1]), atoi(argv[2]));
	cout << "Eredmeny:" << count << endl;
	return 0;
}
