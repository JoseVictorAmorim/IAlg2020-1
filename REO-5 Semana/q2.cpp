#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
	ifstream arquivo("tropas.txt");
	char sWesteros;
	char sInimigo;
	char matriz[10][10];
	if(arquivo){
		while(!arquivo.eof()){
			arquivo >> sWesteros;
			arquivo >> sInimigo;
			
			int tropasW;
			arquivo >> tropasW;
			
			for(int i = 0; i < tropasW; i++){
				int x, y;
				arquivo >> x;
				arquivo >> y;
				matriz[x][y] = sWesteros;
			}
			
			int tropasI;
			arquivo >> tropasI;
			
			for(int i = 0; i < tropasI; i++){
				int x, y;
				arquivo >> x;
				arquivo >> y;
				matriz[x][y] = sInimigo;
			}
			
			char vazio;
			arquivo >> vazio;
			
			for(int i = 0; i < 10; i++){
				for(int j = 0; j < 10; j++){
					if((matriz[i][j] != sWesteros) and (matriz[i][j] != sInimigo)){
						matriz[i][j] = vazio;
					}
				}
			}
	
		}

	}
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
				cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << sWesteros << ": ";
	for(int i = 0; i < 10; i++){
		int qtdeW = 0, qtdeI = 0;
		for(int j = 0; j < 10; j++){
			if(matriz[i][j] == sWesteros){
				qtdeW++;
			}else if(matriz[i][j] == sInimigo){
				qtdeI++;
			}
		}
		if(qtdeW > qtdeI){
			cout << i << " ";
		}
	}
	
	return 0;
}
