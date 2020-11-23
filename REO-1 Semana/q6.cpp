#include <iostream>
using namespace std;

int main(){
	int nquartos;
	cin >> nquartos;
	
	int quarto = 1, desc = 1, mud = 0;
	while (quarto <= nquartos){
		while(desc <= nquartos){
			if((quarto%desc) == 0){
				mud++;
			}
			desc++;
		}
		if((mud%2) != 0){
			cout << quarto << " ";
		}
		desc = 1;
		mud = 0;
		quarto++;
	}
	return 0;
}
