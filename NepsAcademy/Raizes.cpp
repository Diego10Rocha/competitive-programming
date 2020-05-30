#include<bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;
	
	int n;
	double num, raiz;
	cin>>n;
	
	for(int i=0; i<n; i++){
		
		cin>>num;
		raiz = sqrt(num);
		cout<<fixed<<setprecision(4);
		cout<<raiz<<endl;
		
	}
	
}
