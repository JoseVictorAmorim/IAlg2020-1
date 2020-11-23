#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	if (num > 99999)
		cout << "invalido" << endl;
	else {
		cout << num / 10000 << "...";
		cout << (num%10000)/1000 << "...";
		cout << (num%1000)/100 << "...";
		cout << (num%100)/10 << "...";
		cout << (num%10)/1 << endl;
	}
	return 0;
	
}
