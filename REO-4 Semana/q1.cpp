#include <iostream>
using namespace std;

void shell_sort(float vet[], int tamanho, int& contador){
	int gaps[5] = {1, 3, 7, 15, 31};
	int posicao_gap = 4;
	
	while(gaps[posicao_gap] > tamanho){
		posicao_gap--;
	}
	
	float valor;
	int j;
	while(posicao_gap >= 0){
		int gap =  gaps[posicao_gap];
		for(int i = gap; i < tamanho; i++){
			valor = vet[i];
			j = i;
			while((j >= gap) and (valor < vet[j-gap])){
				vet[j] = vet[j-gap];
				j = j-gap;
				contador++;
			}
			vet[j] = valor;
			contador++;
		}
		cout << gap << ": ";
		for(int i = 0; i < tamanho; i++){
			cout << vet[i] << " ";
		}
		cout << endl;
		posicao_gap --;
	}
}

int main(){
	int total;
	cin >> total;
	
	float vetor[total];
	for(int i = 0; i < total; i++){
		cin >> vetor[i];
	}
	
	int alteracoes = 0;
	
	shell_sort(vetor, total, alteracoes);
	
	cout << alteracoes << endl;
	return 0;
}

