#include <iostream>
using namespace std;

int main(){
	float salario;
	cin >> salario;
	if(salario <= 300)
		cout << salario*0.15 << endl << salario+(salario*0.15) << endl;
	else if ((salario > 300) and (salario <= 600))
		cout << salario*0.1 << endl << salario+(salario*0.1) << endl;
	else if ((salario > 600) and (salario <= 900))
		cout << salario*0.05 << endl << salario+(salario*0.05) << endl;
	else
		cout << 0 << endl << salario << endl;
	return 0;
}
