#include <iostream>
using namespace std;

int main(){
	int vet[10] = {0};
	int numElementos;
	cin >> numElementos;
	
	for(int i = 0; i<numElementos; i++){
		cin >> vet[i];
	}
	
	int novoElemento;
	cin >> novoElemento;
	
	int posicao;
	cin >> posicao;
	
	for(int i = 10; i>posicao; i--){
		vet[i] = {vet[i-1]};
	}
	vet[posicao]={novoElemento};
	
	for(int i = 0; i<10; i++){
		cout << vet[i] << " ";
	}
	

	return 0;
}
