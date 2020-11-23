#include <iostream>
using namespace std;

int main(){
	float n1, n2;
	char op;
	cin >> n1 >> op >> n2;
	switch (op){
		case '+':
			cout << n1 + n2 << endl;
			break;
		case '-':
			cout << n1 - n2 << endl;
			break;
		case '*':
			cout << n1 * n2 << endl;
			break;
		case '/':
			if ((n2 == 0) or (n2 > n1))
				cout << "erro" << endl;
			else
				cout << n1 / n2 << endl;
			break;
	}
	
	return 0;
}
