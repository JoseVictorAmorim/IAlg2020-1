#include <iostream>
using namespace std;

void shell_sort(int vet[], int tamanho, int gaps[], int posicao_gap, int& contador){
	contador++;
	while(gaps[posicao_gap] > tamanho){
		posicao_gap--;
		contador++;
	}
	
	int valor, j;	
	
	contador++;
	while(posicao_gap >= 0){
		int gap = gaps[posicao_gap];
		contador++;
		for(int i = gap; i < tamanho; i++){
			valor = vet[i];
			j = i;
			contador++;
			while((j >= gap) and (valor > vet[j-gap])){
				vet[j] = vet[j-gap];
				j = j-gap;
				contador++;
			}
			vet[j] = valor;
			contador++;
		}
		posicao_gap--;
		contador++;	
	}
}

int main(){
	int totalNumeros;
	cin >> totalNumeros; 
	
	int vetor[totalNumeros];
	for (int i = 0; i < totalNumeros; i ++){
		cin >> vetor[i]; //entrada nos valores a serem ordenados
	}
	
	int totalGaps;
	cin >> totalGaps;
	
	int vetor_gaps[totalGaps];
	for (int i = 0; i < totalGaps; i++){
		cin >> vetor_gaps[i]; //entrada do total de Gaps
	}
	
	int testes = 0;
	
	shell_sort(vetor, totalNumeros, vetor_gaps, totalGaps-1, testes);
	
	cout << testes << endl;
	return 0;
}

