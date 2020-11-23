#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string atbash(string mensagem){
	string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string alfaAtbash = "";
	for(int i = alfabeto.length()-1; i > -1; i--){
		alfaAtbash += alfabeto[i];
	}
	
	string criptografado = "";
	int tam = mensagem.length();
	for(int i = 0; i < tam; i++){
		bool contEspaco = true;
		for(int j = 0; j < 26; j++){
			if(mensagem[i] == alfabeto[j]){
				criptografado += alfaAtbash[j];
				contEspaco = false;
			}
		}
		if(contEspaco){
			criptografado += " ";
		}
	}
	return criptografado;
}
int main(){
	string nomeArquivo;
	cin >> nomeArquivo;

	ifstream leitura(nomeArquivo);
	string codificar;
	
	ofstream criptografia("cifrado.txt");
	
	if(leitura){
		while(getline(leitura, codificar)){
			string x = atbash(codificar);
			criptografia << x << endl;
		}
	}
	return 0;
}

