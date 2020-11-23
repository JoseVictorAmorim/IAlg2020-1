#include <iostream>
using namespace std;

int multiSoma(int A, int B){
	int maior, menor;
	if(A>B){
		maior = A;
		menor = B;
	}else{
		maior = B;
		menor = A;
	}
	int cont = 1, aux = 0;
	while(cont<=menor){
		aux += maior;
		cont++;
	}
	return aux;
}
int main(){
	int n1, n2;
	cin >> n1 >> n2;
	
	cout << multiSoma(n1, n2);
	return 0;
}
