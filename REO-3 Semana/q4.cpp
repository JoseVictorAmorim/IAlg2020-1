#include <iostream>
using namespace std;

struct ponto{
	int x;
	int y;
};
struct retangulo{
	ponto V1;
	ponto V2;
};

int main(){
	ponto P;
	cin >> P.x >> P.y;
	
	int numRetangulos;
	cin >> numRetangulos;
	
	retangulo vetorRetangulos[numRetangulos];
	for(int i = 0; i < numRetangulos; i++){
		cin >> vetorRetangulos[i].V1.x;
		cin >> vetorRetangulos[i].V1.y;
		cin >> vetorRetangulos[i].V2.x;
		cin >> vetorRetangulos[i].V2.y;
	}
	
	int retangulosP = 0;
	
	for(int i = 0; i < numRetangulos; i++){
		if((vetorRetangulos[i].V1.x <= P.x) and (vetorRetangulos[i].V1.y <= P.y)){
			if((vetorRetangulos[i].V2.x >= P.x) and (vetorRetangulos[i].V2.y >= P.y)){
				retangulosP++;
			}
		}
	}
	cout << retangulosP << endl;
	return 0;
}

