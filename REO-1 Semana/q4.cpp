#include <iostream>
using namespace std;

int main(){
	int num = 0;
	float soma = 0;
	int positivos = 0, negativos = 0;
	double qtde = -1;
	do{
		cin >> num;
		qtde++;
		soma += num;
		if(num > 0){
			positivos++;
		}
		else if (num < 0){
			negativos++;
		}
	}while (num != 0);
	float media = soma / qtde;
	cout << media << endl << positivos << endl << negativos << endl;
	double ppositivos = (((positivos * 100) / qtde)/100);
	double pnegativos = 1 - ppositivos;
	cout << ppositivos << endl << pnegativos << endl;  
		
		
		
		
		
		
		
	return 0;
}
