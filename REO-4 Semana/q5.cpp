#include <iostream>
using namespace std;

void intercala(int a[], int comeco, int meio, int fim){
	int i = comeco, j = meio+1;
	int tamanho = fim-comeco+1;
	int aux[tamanho];
	
	for(int x = comeco; x <= meio; x++){
		cout << a[x] << " ";
	}
	cout << "+ ";
	for(int x = j; x < fim+1; x++){
		cout << a[x] << " ";
	}
	cout << "= ";
	
	for(int c = 0; c < tamanho; c++){
		if((i <= meio) and (j <= fim)){
			if(a[i] <= a[j]){
				aux[c] = a[i];
				i++;
			}
			else{
				aux[c] = a[j];
				j++;
			}
		}
		else if(i > meio){
			aux[c] = a[j];
			j++;
		}
		else{
			aux[c] = a[i];
			i++;
		}
	}
	for(int c = 0; c < tamanho; c++){
		a[comeco+c] = aux[c];
		cout << aux[c] << " ";
	}
	cout << endl;
}

void mergesort(int vet[], int inicio, int fim){
	int meio;
	if(inicio < fim){
		meio = (inicio+fim)/2;
		mergesort(vet, inicio, meio);
		mergesort(vet, meio+1, fim);
		intercala(vet, inicio, meio, fim);
	}
}
	
int main(){
	int nMax;
	cin >> nMax;
	
	int vetor[nMax];
	for(int i = 0; i < nMax; i++){
		cin >> vetor[i];
	}
	
	mergesort(vetor, 0, nMax-1);
	return 0;
}

