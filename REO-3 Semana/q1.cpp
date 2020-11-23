#include <iostream>
#include <cstring>
using namespace std;

struct doador{
	string nome;
	string tipoSanguineo;
};

int main(){
	int quantidade;
	cin >> quantidade;
	
	doador vetDoadores[quantidade];
	for(int i = 0; i < quantidade; i++){
		cin >> vetDoadores[i].nome;
		cin	>> vetDoadores[i].tipoSanguineo;
	}
	
	string tipoDoacao;
	cin >> tipoDoacao;
	
	if(tipoDoacao == "A"){
		for(int i = 0; i < quantidade; i++){
			if(vetDoadores[i].tipoSanguineo == "A")
				cout << vetDoadores[i].nome << endl;
		}
		for(int i = 0; i < quantidade; i++){
			if(vetDoadores[i].tipoSanguineo == "O")
				cout << vetDoadores[i].nome << endl;
		}
		
	}
	
	if(tipoDoacao == "B"){
		for(int i = 0; i < quantidade; i++){
			if(vetDoadores[i].tipoSanguineo == "B")
				cout << vetDoadores[i].nome << endl;
		}
		for(int i = 0; i < quantidade; i++){
			if(vetDoadores[i].tipoSanguineo == "O")
				cout << vetDoadores[i].nome << endl;
		}
		
	}
	
	if(tipoDoacao == "AB"){
		for(int i = 0; i < quantidade; i++){
			if(vetDoadores[i].tipoSanguineo == "AB")
				cout << vetDoadores[i].nome << endl;
		}
		for(int i = 0; i < quantidade; i++){
			if(vetDoadores[i].tipoSanguineo == "A")
				cout << vetDoadores[i].nome << endl;
		}
		for(int i = 0; i < quantidade; i++){
			if(vetDoadores[i].tipoSanguineo == "B")
				cout << vetDoadores[i].nome << endl;
		}
		for(int i = 0; i < quantidade; i++){
			if(vetDoadores[i].tipoSanguineo == "O")
				cout << vetDoadores[i].nome << endl;
		}
	}
	
	if(tipoDoacao == "O"){
		for(int i = 0; i < quantidade; i++){
			if(vetDoadores[i].tipoSanguineo == "O")
				cout << vetDoadores[i].nome << endl;
		}
	}
	return 0;
}
