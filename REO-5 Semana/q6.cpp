#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct hospede{
	char nome[50];
	int identificador;
	char telefone[12];
};

hospede auxiliar;

void selection_sort(hospede* vetor, int tamanho){
	int menor;
	hospede aux_troca;
	for(int i = 0; i < tamanho-1; i++){
		menor = i;
		for(int j = i+1; j < tamanho; j++){
			if(vetor[j].identificador < vetor[menor].identificador){
				menor = j;
			}
		}
		aux_troca = vetor[i];
		vetor[i] = vetor[menor];
		vetor[menor] = aux_troca;
	}
}

int main(){
	fstream caravana("caravana.bin");
	
	int numHospedes;
	cin >> numHospedes;
	
	for(int i = 0; i < numHospedes; i++){
		cin >> auxiliar.nome >> auxiliar.identificador >> auxiliar.telefone;
		caravana.write((const char *)(&auxiliar), sizeof(hospede));
	}

	int procurado, novoIdentificador;
	cin >> procurado >> novoIdentificador;
	
	caravana.seekg(0, caravana.beg);
	
	hospede* vet = new hospede[numHospedes];
	for(int i = 0; i < numHospedes; i++){
		caravana.read((char *)(&vet[i]), sizeof(hospede));
	}
	
	int inicio = 0;
	int fim = numHospedes - 1;
	int meio; 
	while(inicio <= fim){
		meio = (fim+inicio)/2;
		if(vet[meio].identificador == procurado){
			vet[meio].identificador = novoIdentificador;
			inicio = fim+1;
		}
		else{
			if(vet[meio].identificador > procurado){
				fim = meio-1;	
			}
			else{
				inicio = meio+1;
			}
		}	
	}	
	
	selection_sort(vet, numHospedes);
	
	caravana.seekp(0, caravana.beg);
	
	for(int i = 0; i < numHospedes; i++){
		caravana.write((const char *)(&vet[i]), sizeof(hospede));
	}
	
	for(int i = 0; i < numHospedes; i++){
		cout << vet[i].nome << " " << vet[i].identificador << endl;
	}
	
	delete[] vet;
	
	return 0;
}

