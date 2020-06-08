#include<bits/stdc++.h>
# define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define debug cout << "debug"

using namespace std;

int main(){
	desync;
	
	int n, soma = 0, maior = 0;
	
	cin >> n;
	
	int tabuleiro[n][n], soma_linha[n] = {0}, soma_coluna[n] = {0};
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
		
			cin >> tabuleiro[i][j];
			
			soma_linha[i] += tabuleiro[i][j];
			soma_coluna[j] += tabuleiro[i][j];
			
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			soma = soma_linha[i] + soma_coluna[j] - 2 * tabuleiro[i][j];	
			if(soma > maior)
				maior = soma;
		}
	}
	
	cout << maior << endl;
}
