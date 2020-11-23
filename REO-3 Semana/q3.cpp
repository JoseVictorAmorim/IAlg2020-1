#include <iostream>
#include <string>
using namespace std;

struct pokemon{
	string nomePokemon;
	int atq;
	int def;		
};

struct treinador{
	string nomeTreinador;
	pokemon pokemon1;
	pokemon pokemon2;
	pokemon pokemon3;
};

void duelo(treinador Atacante, treinador Defensor, pokemon& pokeTreinador1, pokemon& pokeTreinador2){
	pokeTreinador1 = Atacante.pokemon1;
	
	if((Atacante.pokemon1.atq < Atacante.pokemon2.atq) and (Atacante.pokemon2.atq > Atacante.pokemon3.atq)){
		pokeTreinador1 = Atacante.pokemon2;
	}
	if((Atacante.pokemon1.atq < Atacante.pokemon3.atq) and (Atacante.pokemon3.atq > Atacante.pokemon2.atq)){
		pokeTreinador1 = Atacante.pokemon3;
	}

	pokeTreinador2 = Defensor.pokemon1;
	
	if((Defensor.pokemon1.def < Defensor.pokemon2.def) and (Defensor.pokemon2.def > Defensor.pokemon3.def)){
		pokeTreinador2 = Defensor.pokemon2;
	}
	if((Defensor.pokemon1.def < Defensor.pokemon3.def) and (Defensor.pokemon3.def > Defensor.pokemon2.def)){
		pokeTreinador2 = Defensor.pokemon3;
	}
}

int main(){
	int numTreinadores;
	cin >> numTreinadores;
	
	treinador vetTreinadores[numTreinadores];
	
	for(int i = 0; i < numTreinadores; i++){
		cin >> vetTreinadores[i].nomeTreinador;
		
		cin >> vetTreinadores[i].pokemon1.nomePokemon;
		cin >> vetTreinadores[i].pokemon1.atq;
		cin >> vetTreinadores[i].pokemon1.def;
		
		cin >> vetTreinadores[i].pokemon2.nomePokemon;
		cin >> vetTreinadores[i].pokemon2.atq;
		cin >> vetTreinadores[i].pokemon2.def;
		
		cin >> vetTreinadores[i].pokemon3.nomePokemon;
		cin >> vetTreinadores[i].pokemon3.atq;
		cin >> vetTreinadores[i].pokemon3.def;
	}
	
	int treinadorAtacante;
	cin >> treinadorAtacante;
	
	int treinadorDefensor;
	cin >> treinadorDefensor;
	
	pokemon pokemonAtacante; 
	pokemon pokemonDefensor;

	duelo(vetTreinadores[treinadorAtacante], vetTreinadores[treinadorDefensor], pokemonAtacante, pokemonDefensor);
	
	if(pokemonAtacante.atq > pokemonDefensor.def){
		cout << vetTreinadores[treinadorAtacante].nomeTreinador << endl;
		cout << pokemonAtacante.nomePokemon << endl;
	}
	else{
		cout << vetTreinadores[treinadorDefensor].nomeTreinador << endl;
		cout << pokemonDefensor.nomePokemon << endl;
	}
	return 0;
}
