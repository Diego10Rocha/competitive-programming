#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

struct Piloto{
	int id, pontos;
};

int ordenacao(Piloto a, Piloto b){
	 
	if(a.pontos == b.pontos)
		return a.id < b.id;
	
	return a.pontos > b.pontos;
}

int main(){
	desync;

	int G, P, S, S_ultimo, aux=0;
	cin >> G >> P;
	
	while(G != 0 && P != 0){
		vector <Piloto> piloto;
		Piloto in;
		int corridas[G][P];

		piloto.clear();
		
		for(int i = 0; i < P; i++){
			in.id = i+1;
			in.pontos = 0;
			piloto.push_back(in);
		}

		for(int i = 0; i < G; i++){
			for(int j = 0; j < P; j++){
				cin >> corridas[i][j];
			}
		}		
		cin >> S;

		for(int i = 0; i < S; i++){
			int pontuacao[P] = {0};
			cin >> S_ultimo;

			piloto.clear();

			for(int i = 0; i < P; i++){
				in.id = i+1;
				in.pontos = 0;
				piloto.push_back(in);
			}
	
			for(int j = 0; j < S_ultimo; j++){
				cin >> pontuacao[j];
			}
	
			for(int j = 0; j < G; j++){
				for(int k = 0; k < P; k++){
					aux = corridas[j][k]-1;
					piloto[k].pontos += pontuacao[aux];
				}
			}
		
			sort(piloto.begin(), piloto.end(), ordenacao);
	
			cout << piloto[0].id;

			for(int j=1; j<P; j++){
				if(piloto[0].pontos == piloto[j].pontos)
					cout << " " << piloto[j].id;
			}
			cout << endl;
		}
		cin >> G >> P;
	}
}
