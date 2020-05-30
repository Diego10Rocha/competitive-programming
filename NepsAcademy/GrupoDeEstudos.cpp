#include<bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;
	
	int n, aux=0, qtd=0;
	cin>>n;
	int num;
	
	for(int i=0; i<n; i++){
		cin>>num;
		if(num!=aux){
			qtd++; 
			aux=num;
		}
	}
	
	cout<<qtd;
}

/*
if(M[i]!=aux){
			qtd++; 
			aux=M[i];
		}
*/
