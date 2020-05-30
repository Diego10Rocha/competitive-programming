#include<bits/stdc++.h>
# define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;
	
	int c, a, qtd, qtd2;
	
	cin >> c >> a;
	qtd = a / c;
	qtd2 = (a+qtd)/c + 1;
	
	cout << qtd2;
	
}
