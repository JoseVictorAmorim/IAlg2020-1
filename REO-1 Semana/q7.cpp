#include <iostream>
using namespace std;

int main(){
	int nmax;
	cin >> nmax;
	
	int largura = 1, linha = 1;
	while(linha<=nmax){
		if(largura == 1){
			cout << "@";
			largura++;
		}
		while(largura<=linha){
			if((largura%2) == 0){
				cout << "#";
			}
			else if ((largura%2)!= 0){
				cout << "@";
			}
			largura++;
		}
		largura = 1;
		cout << endl;
		linha++;
	}
	return 0;
}
