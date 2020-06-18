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
	//desync;

	int G, P, aux, S, S_ultimo;
	
	cin >> G >> P;	
	
	Piloto piloto[P];
	int corridas[G][P];
	
	while(G != 0 && P !=0){
		
		for(int i=0; i<P; i++){
		
			piloto[i].pontos = 0;
			piloto[i].id = i+1;
		}
		
		for(int i=0; i<G; i++){
			for(int j=0; j<P; j++){
				cin >> corridas[G][P];
			}
		}
		
		cin >> S;
		
		for(int i=0; i<S; i++){
			
			cin >> S_ultimo;
			int pontuacao[S_ultimo] = {0}, vencedores[P] = {0};
			
			for(int j=0; j<S_ultimo; j++){
			
				cin >> pontuacao[j];
			}
			
			for(int j=0; j<P; j++){
				
				piloto[j].pontos = 0;
			}
			cout << G;
			
			for(int j=0; j<G; j++){
				for(int k=0; k<S_ultimo;k++){
					aux = corridas[j][k];
					piloto[aux].pontos += pontuacao[k];
				}
			}
			
			sort(piloto, piloto+P, ordenacao);
			
			vencedores[0] = piloto[0].pontos;
			cout << piloto[0].pontos;
			for(int j=1; j<P; j++){
				if(piloto[0].pontos == piloto[i].pontos)
					vencedores[j] = piloto[j].id;
			}
		}
		
		/*sort(piloto, piloto+P, ordenacao);
		
		int aux3 = piloto[0].pontos;
		
		cout << piloto[0].id << " ";
		for(int i=1; i<P; i++){
			if(aux3 == piloto[i].pontos)
				cout << piloto[i].id << " ";
		}*/
		
		cin >> G >> P;
	}
}
