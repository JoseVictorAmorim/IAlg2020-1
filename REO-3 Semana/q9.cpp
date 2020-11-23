#include <iostream>
#include <string>
using namespace std;

struct meme{
	int numMeme;
	string nomeArquivo;
	string assunto;
	string site;
};

void leituraVetor(meme vet[], int nMax){
	for(int i = 0; i < nMax; i++){
		cin >> vet[i].numMeme;
		cin >> vet[i].nomeArquivo;
		cin >> vet[i].assunto;
		cin >> vet[i].site;
	}
}

void selection_sort(meme vet[], int nMax){
	int menor;
	meme auxTroca;
	for(int i = 0; i < nMax-1; i++){
		menor = i;
		for(int j = i+1; j < nMax; j++){
			if((vet[j].numMeme) < (vet[menor].numMeme)){
				menor = j;
			}
		}
		auxTroca = vet[i];
		vet[i] = vet[menor];
		vet[menor] = auxTroca;
	}
}
	
void saidaVetor(meme vet[], int nMax, string siteBusca){
	int contador = 0;
	for(int i = 0; i < nMax; i++){
		if(vet[i].site == siteBusca){
			cout << vet[i].numMeme << " ";
			cout << vet[i].nomeArquivo << " ";
			cout << vet[i].assunto << " ";
			cout << vet[i].site << endl;
			contador++;
		}
	}
	if (contador == 0){
		cout << "Inexistente" << endl;
	}
}


int main(){
	int totalMemes;
	cin >> totalMemes;
	
	meme vetorMemes[totalMemes];
	
	leituraVetor(vetorMemes, totalMemes); //leitura dos dados do vetor
	
	selection_sort(vetorMemes, totalMemes); //ordenação do vetor por numero do meme
	
	string busca;
	cin >> busca;
	
	saidaVetor(vetorMemes, totalMemes, busca); // saida de acordo com a entrada do site

	return 0;
}
