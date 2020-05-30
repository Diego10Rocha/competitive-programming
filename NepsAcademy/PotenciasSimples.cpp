#include<bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;
	
	double x, y, potencia;
	cin>>x>>y;
	
	potencia = pow(x,y);
	cout << fixed << setprecision(4);
	cout<<potencia<<endl;
	
}
