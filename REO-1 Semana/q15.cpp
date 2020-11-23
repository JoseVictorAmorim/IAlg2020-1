#include <iostream>
using namespace std;

int multiSoma(int A, int B){
	if(B == 1){
		return A;
	}else{
		return(A +(multiSoma(A, (B-1))));
	}
}
int main(){
	int n1, n2;
	cin >> n1 >> n2;
	
	cout << multiSoma(n1, n2);
	return 0;
}
