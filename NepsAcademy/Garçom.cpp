#include<bits/stdc++.h>

using namespace std;

int main(){

	int n, l, c=0, cont=0, i=0;
	cin>>n;
	
	while(i<n){
	
		cin>>l>>c;
		
		if(c<l)
			cont+=c;
		i++;
	}
	cout<<cont<<endl;
}
