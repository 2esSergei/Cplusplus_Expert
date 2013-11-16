#include<iostream>
#include<cstdio>

using namespace std;

int a(){
	printf("a");
	return 1;
}
int b(){
	printf("b");
	return 2;
}
int c(){
	printf("c");
	return 3;
}
int sum(int a, int b, int c){
	return a + b + c;
}
int main(int argc, char** argv){
	printf("%d", sum(a(),b(),c()));
	return (EXIT_SUCCESS);
}

