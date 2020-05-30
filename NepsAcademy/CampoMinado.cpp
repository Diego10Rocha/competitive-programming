#include<bits/stdc++.h>
#define endl '\n'
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main(){
	desync;
	
	int n;
	cin>>n;
	int campo[n];
	
	for(int i=0; i<n; i++){
		
		cin >> campo[i];
	}
	for(int i=0; i<n; i++){
		
		if(i>0 && i<n-1)
			cout<<campo[i]+campo[i-1]+campo[i+1]<<endl;
		else if(i==n-1 && n>1)
			cout<<campo[i]+campo[i-1]<<endl;
		else if(i==0 && n>1)
			cout<<campo[i]+campo[i+1]<<endl;
		else
			cout<<campo[i]<<endl;
	}

}
