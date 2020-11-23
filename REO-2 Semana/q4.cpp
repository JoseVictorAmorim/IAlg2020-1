#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char vetTexto[254];
	cin.getline(vetTexto, 254);
	
	char vetBusca[254];
	cin.getline(vetBusca, 254);

	int tamanhoBusca = strlen(vetBusca);
	
	int posicao = -1, cont=0;
	int aux = 0;
	while((cont<254) and (posicao == -1)){
		if(vetTexto[cont] == vetBusca[0]){
			aux++;
			for(int i = 1; i<tamanhoBusca; i++){
				if(vetTexto[cont+i] == vetBusca[i])
					aux++;
				else
					aux = 0;
			}
		}
		if(aux >= tamanhoBusca)
			posicao = cont;
		cont ++;
	}
			
	cout << posicao << endl;
	return 0;
}
