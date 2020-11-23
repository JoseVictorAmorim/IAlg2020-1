#include <iostream>
using namespace std;

int ricci(int a1, int a2, int valor){
	if(valor==0)
		return a1;
	if(valor==1)
		return a2;
	else{
		return(ricci(a1, a2, (valor-1))+(ricci(a1, a2, (valor-2))));
	}		
}

int main(){
	int termo1, termo2;
	cin >> termo1 >> termo2;
	int nTermos;
	cin >> nTermos;
	int cont = 0;
	while(cont<nTermos){
		cout << ricci(termo1, termo2, cont) << " ";
		cont++;
	}
	return 0;
}
