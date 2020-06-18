#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;

	int n, cont = 0;
	
	cin >> n;
	
	string respostas[n];
	
	for(int i = 0; i < n; i++){
		cin >> respostas[i];
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i != j){
				
				if(respostas[i] == respostas[j]){
					
					cont++;
					respostas[j] = ""+cont;
					
				}
			}
		}
	}
	
	cout << cont << endl;
	
}
