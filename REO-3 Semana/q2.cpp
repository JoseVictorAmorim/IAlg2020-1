#include <iostream>
#include <string>
using namespace std;

struct stormtrooper{
	string nome;
	string planetaOrigem;
	int numBatalhas;
};

struct planeta{
	string nomePlaneta;
	int numStormtroopers = 0;
	float mediaBatalhas = 0;
};

int main(){
	int qtdeTropas;
	cin >> qtdeTropas;
	
	stormtrooper vetTropas[qtdeTropas];
	for(int i = 0; i < qtdeTropas; i++){
		cin >> vetTropas[i].nome;
		cin >> vetTropas[i].planetaOrigem;
		cin >> vetTropas[i].numBatalhas;
	}
	
	int qtdePlanetas = 1;
	planeta vetPlanetas[qtdeTropas]; //numero máximo de planetas = numero máximo de tropas.
	vetPlanetas[0].nomePlaneta = vetTropas[0].planetaOrigem;
	bool auxiliar = false;
	
	for(int i = 1; i < qtdeTropas; i++){
		if(vetTropas[i].planetaOrigem != vetTropas[i-1].planetaOrigem){
			for(int c = 0; c < qtdePlanetas; c++){
				if(vetTropas[i].planetaOrigem != vetPlanetas[c].nomePlaneta){
					auxiliar = true;
				}
				else{
					auxiliar = false;
					c = qtdePlanetas+1; //sair do laço

				}
			}
		}
		if(auxiliar){
			vetPlanetas[qtdePlanetas].nomePlaneta = vetTropas[i].planetaOrigem;
			qtdePlanetas++;
		}
		auxiliar = false; 
	}
	
	for(int i = 0; i < qtdeTropas; i++){
		for(int j = 0; j < qtdePlanetas; j++){
			if(vetTropas[i].planetaOrigem == vetPlanetas[j].nomePlaneta){
				vetPlanetas[j].numStormtroopers++;
				vetPlanetas[j].mediaBatalhas += vetTropas[i].numBatalhas;
			}
		}		
	}
	
	for(int i = 0; i < qtdePlanetas; i++){
		vetPlanetas[i].mediaBatalhas = vetPlanetas[i].mediaBatalhas/vetPlanetas[i].numStormtroopers;
		cout << vetPlanetas[i].nomePlaneta << " ";
		cout << vetPlanetas[i].numStormtroopers << " ";
		cout <<vetPlanetas[i].mediaBatalhas << endl;
	}
	return 0;
}
