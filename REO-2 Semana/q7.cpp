#include <iostream>
using namespace std;

int main(){
	int max;
	cin >> max;
	
	int vet[max];
	for(int i = 0; i<max; i++){
		cin >> vet[i];
	}
	
	int busca;
	cin >> busca;
	
	int substituicao;
	cin >> substituicao;
	
	int pInicial = 0;
	int pFinal = max-1;
	int meio, pBusca = -1, comparacoes = 0;
	while(pInicial <= pFinal){
		meio = (pInicial+pFinal)/2;
		if(vet[meio] == busca){
			pBusca = meio;
			pInicial = pFinal+1;	
		}
		else{
			if(vet[meio] > busca){
				pFinal = meio-1;
			}
			else{
				pInicial = meio+1;
			}
		}
		comparacoes++;
	}
	
	if(pBusca!= -1)
		vet[pBusca] = {substituicao};
	
	for(int i = 0; i<max; i++){
		cout << vet[i] << " ";
	}
	
	cout << endl << comparacoes;
	return 0;
}
