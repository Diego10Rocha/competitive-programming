#include<bits/stdc++.h>
# define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;
	int n, soma2=0, soma3=0;
	const int  soma=0;
	bool perfeito=true, linhas = true, colunas = true;
	cin >> n;
	
	int matriz[n][n];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> matriz[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
	
		soma = 0;
		soma3 = 0;
		
		for(int j=0;j<n;j++){
		
			soma2 += matriz[i][j];
			soma3 += matriz[j][i];
			
		}
		if(i==1)
		
			soma = soma2;
			
		if(soma2 != soma && i>0)
		
			linhas = false;
			
		if(soma3 != soma && i>0)
		
			colunas = false;
			
		soma2 = soma;
		soma4 = soma3;
		
	}
	
	for(int i=0;i<n;i++){
	
		soma5 += matriz[i][i];
		soma6 += matriz[n-1-i][i];
		
	}
	
	if(soma5 == soma6)
	
		diagonais = true;
	
	if(diagonais && linhas && colunas)
	
		cout << soma5;
	else
		cout << "-1";
}
