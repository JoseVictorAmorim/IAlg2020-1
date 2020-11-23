#include <iostream>
using namespace std;

int main(){
	char letra;
	cin >> letra;
	switch(letra){
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z':
			cout << "MINUSCULA" << endl;
			break;
		default:
			cout << "MAIUSCULA" << endl;
			break;
	}
	return 0;
}
