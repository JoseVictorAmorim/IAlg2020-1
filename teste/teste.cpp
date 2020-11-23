#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void bubble_sort(int vet[], int num){
	int aux;
	for(int i = 0; i < num-1; i++){
		for(int j = 0; j < num-1-i; j++){
			if(vet[j] > vet[j+1]){
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
		}
	}
}

int main(){
	ifstream entrada("dados.txt");
	if(entrada){
		entrada.seekg(0, entrada.end);
		int tamanho = entrada.tellg();
		entrada.seekg(0, entrada.beg);
		cout << tamanho << endl << endl;
		char bloco[tamanho];
		entrada.read(bloco, tamanho);
		cout.write(bloco, tamanho);
	}else{
		cout << "ldfjsgujds" << endl;
		
	}
	return 0;
}

