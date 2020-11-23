#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char vetor1[100];
	char vetor2[100];
	
	cin.getline(vetor1, 100);
	cin.getline(vetor2, 100);
	
	int tamVetor1 = strlen(vetor1);
	int tamVetor2 = strlen(vetor2);
	int tamTotal = tamVetor1+tamVetor2+1; //elementos do vetor1, elementos do vetor 1 e o ' ' de separação
	
	char* pointer = new char[tamTotal]; //vetor de char alocado dinamicamente
	
	for(int i = 0; i < tamVetor1; i++){ //entrada do primeiro vetor
		pointer[i] = vetor1[i];
	}
	pointer[tamVetor1] = ' '; // char de separação
	int j = 0; //contador de elementos de vetor2
	for(int i = tamVetor1+1; i < tamTotal; i++){ //entrada do segundo vetor
		pointer[i] = vetor2[j];
		j++;
	}
	
	for(int i = 0; i < tamTotal; i++){
		cout << pointer[i];
	}
	cout << endl;
	
	delete[] pointer; //desalocamento do ponteiro
	
	return 0;
}

