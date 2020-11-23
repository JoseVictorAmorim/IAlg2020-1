#include <iostream>
using namespace std;

int antecessor(int num1){
	num1--;
	return num1;
}
int sucessor(int num2){
	num2++;
	return num2;
}
int soma(int a, int b){
	if(a==0)
		return b;
	else if(b == 0)
		return a;
	else{
		return(soma(antecessor(a), sucessor(b)));
	}
}
	
int main(){
	int x, y;
	cin >> x >> y;
	int maior, menor;
	if(x>y){
		maior = x;
		menor = y;
	}
	else{
		maior = y;
		menor = x;
	}
	cout << soma(maior, menor);
	return 0;
	
}
