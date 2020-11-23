#include <iostream>
using namespace std;

int main(){
	int idade;
	cin >> idade;
	if (idade < 5){
		cout << "Nao registrado" << endl;
	}
	if ((idade >= 5) and (idade <= 7)){
		cout << "Infantil" << endl;
	}
	if ((idade > 7) and (idade < 11)){
		cout << "Juvenil" << endl;
	}
	if ((idade > 10) and (idade < 16)){
		cout << "Adolescente" << endl;
	}
	if ((idade > 15) and (idade < 31)){
		cout << "Adulto" << endl;
	}
	else if (idade > 30){
		cout << "Senior" << endl;
	}
	return 0;
}
	
