#include<bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;

	int n, vetor[10000], cont=0;
	cin>>n;
	
	for(int i=0 ; i<n; i++){
		cin>>vetor[i];
	}
	for(int i=1; i<n-1; i++){
		if(vetor[i-1]==1 && vetor[i]==0 && vetor[i+1]==0)
		cont++;
	}
	
	cout<<cont<<endl;
}
