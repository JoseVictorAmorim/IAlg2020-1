#include <iostream>
using namespace std;

int main(){
	int l1, l2, l3;
	cin >> l1 >> l2 >> l3;
	if ((l1 <= l2+l3) and (l2 <= l1+l3) and (l3 <= l2+l1)){
		if ((l1==l2) and (l2==l3)){
			cout << "equilatero" << endl;
		}
		else if ((l1==l2) or (l1==l3) or (l2==l3)){
			cout << "isoceles" << endl;
		}
		else{
			cout << "escaleno" << endl;	
		}
	}
	else{
		cout << -1 << endl;
	}
	
	return 0;
}


