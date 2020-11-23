#include <iostream>
using namespace std;

int hoare(int vet[], int inicio, int fim){
	int pivo = vet[inicio+(fim-inicio)/2];
	int i = inicio-1;
	int j = fim+1;
	
	while(true){
		do{
			i++;
		}while(vet[i] < pivo);
		
		do{
			j--;
		}while(vet[j] > pivo);
		if(i>=j){
			cout << pivo << ": ";
			for(int c = inicio; c <= fim; c++){
				cout << vet[c] << " ";
			}	
			cout << endl;
			return j;
		}
		swap(vet[i], vet[j]);
	}
}

void quicksort(int vet[], int pos_pivo, int fim){
	int novoPivo;
	if(pos_pivo < fim){
		novoPivo = hoare(vet, pos_pivo, fim);
		quicksort(vet, pos_pivo, novoPivo);
		quicksort(vet, novoPivo+1, fim);
	}
}

int main(){
	int total;
	cin >> total;
	
	int vetor[total];
	for(int i = 0; i < total; i++){
		cin >> vetor[i];
	}
	
	quicksort(vetor, 0, total-1);
	
	for(int i = 0; i < total; i++){
		cout << vetor[i] << " ";
	}	
	cout << endl;
	
	return 0;
}

