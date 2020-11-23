#include <iostream>
using namespace std;

double soma(int total){
	double cont = 1;
	double S = 0;
	while(cont<=total){
		S = S + (cont*(cont+1)/(cont+3));
		cont++;
	}
	return S;
}
	
int main(){
	int termos;
	cin >> termos;
	cout.precision(2);
	cout << fixed << soma(termos);	
	return 0;
}
