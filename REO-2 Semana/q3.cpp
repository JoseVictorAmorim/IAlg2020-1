#include <iostream>
using namespace std;

int main(){
	int qtde1;
	cin >> qtde1;
	string lista1[qtde1];
	for(int i = 0; i<qtde1; i++){
		cin >> lista1[i];
	}
	
	int qtde2;
	cin >> qtde2;
	string lista2[qtde2];
	for(int i = 0; i<qtde2; i++){
		cin >> lista2[i];
	}
	
	int iguais = 0, totalIguais = 0;
	for(int i = 0; i<qtde1; i++){
		for(int c=0; c<qtde2; c++){
			if(lista1[i] == lista2[c]){
				iguais++;
				totalIguais++;
			}
		}
		if(iguais == 0){
			cout << lista1[i] << endl;
		}
		iguais = 0;
	}
	
	if(totalIguais == qtde1)
		cout << "NADA" << endl;
	return 0;
}
