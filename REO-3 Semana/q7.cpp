#include <iostream>
#include <string>
using namespace std;

struct produto{
	int identificador;
	string descricao;
	float preco;
};

void valoresVetor(produto vet[], int nMax){
	for(int i = 0; i < nMax; i++){
		cin >> vet[i].identificador;
		cin.ignore(2, '\n');
		getline(cin, vet[i].descricao);
		cin >> vet[i].preco;
	}
}

void insertion_sort(produto vet[], int nMax){
	int j;
	produto pivo;
	for(int i = 1; i < nMax; i++){
		pivo = vet[i];
		j = i-1;
		while((j >= 0) and (pivo.preco < vet[j].preco)){
			vet[j+1] = vet[j];
			j--;
		}
		vet[j+1] = pivo;
	}
}

int main(){
	int totalProdutos;
	cin >> totalProdutos;
	
	produto vetorProdutos[totalProdutos];
	
	valoresVetor(vetorProdutos, totalProdutos); //entrada de dados no vetor
	
	insertion_sort(vetorProdutos, totalProdutos); //ordenação por preço
	
	float menorValor, maiorValor;
	cin >> menorValor >> maiorValor;
	
	int contador = 0;
	for(int i = 0; i < totalProdutos; i++){
		if ((vetorProdutos[i].preco >= menorValor) and (vetorProdutos[i].preco <= maiorValor)){
			cout << vetorProdutos[i].identificador << " ";
			cout << "\"" << vetorProdutos[i].descricao << "\"" << " ";
			cout.precision(2);
			cout << fixed << vetorProdutos[i].preco << endl;
			contador++;
		}
	}
	
	if(contador == 0){
		cout << "Inexistente" << endl;
	}
	return 0;
}

