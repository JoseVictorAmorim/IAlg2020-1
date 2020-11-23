#include <iostream>
#include <string>
using namespace std;

struct data{
	int dia;
	int mes;
	int ano;
};
struct animal{
	int identificador;
	string nomeAnimal;
	string nomeDono;
	data dataVacina;
};

int main(){
	animal vetAnimais[100]; //Numero máximo de animais
	int numAnimais = 0;
	for(int i = 0; i<100; i++){
		cin >> vetAnimais[i].identificador;
		if(vetAnimais[i].identificador != 0){
			cin >> vetAnimais[i].nomeAnimal;
			cin >> vetAnimais[i].nomeDono;
			cin >> vetAnimais[i].dataVacina.dia;
			cin >> vetAnimais[i].dataVacina.mes;
			cin >> vetAnimais[i].dataVacina.ano;
			numAnimais++;
		}
		else{
			i = 101;
		}
	}
	
	int identificadorBusca;
	cin >> identificadorBusca;
	
	int pInicial = 0;
	int pFinal = numAnimais;
	int meio, posicaoAnimal = -1;
	while(pInicial <= pFinal){
		meio = (pFinal+pInicial)/2;
		if(vetAnimais[meio].identificador == identificadorBusca){
			posicaoAnimal = meio;
			pInicial = pFinal+1; //encerrar o while
		}
		else{
			if(vetAnimais[meio].identificador > identificadorBusca){
				pFinal = meio-1;
			}
			else{
				pInicial = meio+1;
			}
		}
	}
	
	if(posicaoAnimal == -1){
		cout << "inexistente" << endl;
	}
	else{
		cout << vetAnimais[posicaoAnimal].nomeAnimal << " ";
		cout << vetAnimais[posicaoAnimal].dataVacina.dia << "/";
		cout << vetAnimais[posicaoAnimal].dataVacina.mes << "/";
		cout << vetAnimais[posicaoAnimal].dataVacina.ano << endl;
	}
	
	return 0;
}

