#include <iostream>
#include <string>
using namespace std;

int main(){
	string nomes[10];
	int totalVendas [10];
	float pComissao[10];
	
	for(int i = 0; i<10; i++){
		cin >> nomes[i] >> totalVendas[i] >> pComissao[i];
	} 
	
	float valoresComissao[10];
	int maiorValor = valoresComissao[0];
	int posicao = -1;
	for (int i = 0; i<10; i++){
		valoresComissao[i] = totalVendas[i]*pComissao[i];
		cout << nomes[i] << " " << valoresComissao[i] << endl;
		if(valoresComissao[i]>maiorValor){
			maiorValor = valoresComissao[i];
			posicao = i;
		}
	}
	
	int vendasGeral = 0;
	for(int i = 0; i<10; i++){
		vendasGeral += totalVendas[i];
	}
	cout << endl;
	cout << vendasGeral << endl;
	cout << nomes[posicao] << " " << valoresComissao[posicao];
	return 0;
}
