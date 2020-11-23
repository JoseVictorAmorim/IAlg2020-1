#include <iostream>
using namespace std;

int main(){
	int tamanho;
	cin >> tamanho;
	int matriz[tamanho][tamanho];
	for(int i = 0; i<tamanho; i++){
		for(int j = 0; j<tamanho; j++){
			cin >> matriz[i][j];
		}
	}
	
	int soma = 0;
	int contador = 1;
	for(int j = 0; j<((tamanho/2)); j++){
		for(int i = contador; i<tamanho-contador; i++){
			soma += matriz[i][j];
		}
		contador++;
	}
	cout << soma << endl;
	return 0;
}
