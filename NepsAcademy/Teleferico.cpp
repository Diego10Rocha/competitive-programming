#include<bits/stdc++.h>
# define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;
	
	int c, a, qtd;
	
	cin >> c >> a;
	
	c--;
	qtd = a / c;
	if(a % c == 0)
		cout << qtd << endl;
		
	else
		cout << qtd + 1 << endl;
}
