#include<bits/stdc++.h>
# define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;
	int n, soma = 0, soma2 = 0, soma3 = 0;
	bool diagonais = false, linhas_colunas = true;
	
	cin >> n;
	
	int matriz[n][n];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> matriz[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
		
		for(int j = 0; j < n; j++){
		
			soma2 += matriz[i][j];
			soma3 += matriz[j][i];
			
		}
		if(i==0)
		
			soma = soma2;
			
		if(soma2 != soma || soma3 != soma)
		
			linhas_colunas = false;
		
		soma2 = 0;
		soma3 = 0;
		
	}
	
	for(int i=0;i<n;i++){
	
		soma2 += matriz[i][i];
		soma3 += matriz[n-1-i][i];
		
	}
	
	if(soma2 == soma && soma3 == soma)
	
		diagonais = true;
	
	if(diagonais && linhas_colunas)
	
		cout << soma << endl;
	else
		cout << "-1" <<endl;
}
