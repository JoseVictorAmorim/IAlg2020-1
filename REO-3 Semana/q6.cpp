#include <iostream>
#include <string>
using namespace std;

struct figurinha{
	int numFigurinha;
	string nomeJogador;
	int qtdeCopias;
};

void elementos_vetor(figurinha vet[], int nElementos){
	for(int i = 0; i < nElementos; i++){
		cin >> vet[i].numFigurinha;
		cin >> vet[i].nomeJogador;
		cin >> vet[i].qtdeCopias;
	}
}

void selection_sort(figurinha vet[], int nElementos){
	int menor;
	figurinha auxiliar;
	for (int i = 0; i < nElementos-1; i++){
		menor = i;
		for (int j = i+1; j < nElementos; j++){
			if(vet[j].numFigurinha < vet[menor].numFigurinha){
				menor = j;
			}
		}
		auxiliar= vet[i];
		vet[i] = vet[menor];
		vet[menor] = auxiliar;
	}
}

int busca(figurinha vet[], int nElementos, int procurada){
	int posicao = -1;
	int i = 0;
	while((i < nElementos) and (vet[i].numFigurinha != procurada)){
		i++;
	}
	if(i != nElementos){
		posicao = i;
	}
	return posicao;
}

int main(){
	int nMax;
	cin >> nMax;
	
	figurinha cadastro[nMax];
	elementos_vetor(cadastro, nMax);
	
	int figurinha_procurada;
	cin >> figurinha_procurada;
	
	selection_sort(cadastro, nMax);
	
	int posicao_procurada = busca(cadastro, nMax, figurinha_procurada);
	
	cout << posicao_procurada << endl;
	
	if(posicao_procurada != -1){
		cout << cadastro[posicao_procurada].nomeJogador << " ";
		cout << cadastro[posicao_procurada].qtdeCopias << endl;
	}
	return 0;
}

