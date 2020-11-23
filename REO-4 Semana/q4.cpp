#include <iostream>
using namespace std;

void selection_sort(int vet[], int tamanho){
	int menor, auxiliar;
	for(int i = 0; i < tamanho-1; i++){
		menor = i;
		for(int j = i+1; j < tamanho; j++){
			if(vet[j] < vet[menor]){
				menor = j;
			}
		}
		auxiliar = vet[i];
		vet[i] = vet[menor];
		vet[menor] = auxiliar;
	}
}

int particionamento(int vet[], int comeco, int fim){
	int pivo = vet[comeco], i = comeco+1, j = fim;
	
	while(i <= j){
		if(vet[i] <= pivo){
			i++;
		}
		else if(pivo <= vet[j]){
			j--;
		}
		else{
			swap(vet[i], vet[j]);
			i++;
			j--;
		}
	}
	vet[comeco] = vet[j];
	vet[j] = pivo;
	return j;
}

void quicksort(int vet[], int posicao_pivo, int fim){
	int novoPivo;
	if(posicao_pivo < fim){
		novoPivo = particionamento(vet, posicao_pivo, fim);
		quicksort(vet, posicao_pivo, novoPivo-1);
		quicksort(vet, novoPivo+1, fim);
	}
}

int main(){
	int maximo;
	cin >> maximo;
	
	int tamanhoVetor;
	cin >> tamanhoVetor;
	
	int vetor[tamanhoVetor];
	for(int i = 0; i < tamanhoVetor; i++){
		cin >> vetor[i];
	}
	
	if(tamanhoVetor < maximo){
		selection_sort(vetor, tamanhoVetor);
	}
	else{
		quicksort(vetor, 0, tamanhoVetor-1);
	}
	
	for(int i = 0; i < tamanhoVetor; i++){
		cout << vetor[i] << " ";
	}
	cout << endl;
	
	return 0;
}

