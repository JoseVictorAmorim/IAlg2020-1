#include <iostream>
using namespace std;

void imprimeRev(int max){
	if(max==0){
		return;
	}
	int valor;
	cin >> valor;
	imprimeRev(max-1);
	cout << valor << " ";
}


int main(){
	int nmax;
	cin >> nmax;
	imprimeRev(nmax);
	return 0;
}

	
