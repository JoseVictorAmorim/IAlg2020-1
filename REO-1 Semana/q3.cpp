#include <iostream>
using namespace std;

int main(){
	int n1, n2;
	cin >> n1 >> n2;
	
	int maior, menor;
	if(n1>n2){
		maior = n1;
		menor = n2;
	}
	else{
		menor = n1;
		maior = n2;
	}
	int aux = 1, multi= maior;
	while((multi%menor)!= 0){
		aux++;
		multi = maior*aux;
	}
	cout << multi << endl;
	return 0;
}
