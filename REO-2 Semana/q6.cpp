#include <iostream>
using namespace std;

int main(){
	int qtdeElementos;
	cin >> qtdeElementos;
	int vet[qtdeElementos];
	for(int i = 0; i < qtdeElementos; i++){
		cin >> vet[i];
	}
	
	int removido;
	cin >> removido;
	
	int posicao = -1, i = 0;
	while((i<qtdeElementos) and (vet[i] != removido)){
		i++;
	}
	
	if (i!=qtdeElementos){
		posicao = i;
		for(int c = posicao; c < qtdeElementos-1; c++){
			vet[c] = vet[c+1];
		}
		for(int j  = 0; j < qtdeElementos-1; j++){
			cout << vet[j] << " ";
		}
	}
	else{
		cout << "ELEMENTO NAO ENCONTRADO" << endl;
	}
	
	return 0;
}
