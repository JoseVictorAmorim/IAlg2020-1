#include <iostream>
using namespace std;

void fib(int n1){
	int cont = 0;
	int nSeq, menos1= 1, menos2 = 0;
	while(cont<n1){
		if(cont==0)
			nSeq = 0;
		else if(cont==1)
			nSeq = 1;
		else if(cont>=2)
			nSeq = menos1+menos2;
		menos2 = menos1;
		menos1 = nSeq;
		cout << nSeq << " ";
		cont++;
	}
}
int main(){
	int termos;
	cin >> termos;
	fib(termos);
		
	return 0;
}
