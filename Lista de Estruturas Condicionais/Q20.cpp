#include <iostream>
using namespace std;

int main(){
	int cod;
	float salario;
	cin >> cod >> salario;
	switch(cod){
		case 1:
			cout << "Escriturario" << endl;
			cout << (salario*0.5) << endl;
			cout << salario + (salario * 0.5) << endl;
			break;
		case 2:
			cout << "Secretario" << endl;
			cout << (salario*0.35) << endl;
			cout << salario + (salario * 0.35) << endl;
			break;
		case 3:
			cout << "Caixa" << endl;
			cout << (salario*0.2) << endl;
			cout << salario + (salario * 0.2) << endl;
			break;
		case 4:
			cout << "Gerente" << endl;
			cout << (salario*0.1) << endl;
			cout << salario + (salario * 0.1) << endl;
			break;
		case 5:
			cout << "Diretor" << endl;
			cout << 0 << endl;
			cout << salario << endl;
			break;
	}
	return 0;
}
