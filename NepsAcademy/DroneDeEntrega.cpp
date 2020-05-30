#include<bits/stdc++.h>
# define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;
	
	int a, b, c, h, l;
	cin >> a >> b >> c >> h >> l;	
	
	if((a<=h && b<=l) || (a<=l && b<=h) || (a<=h && c<=l) || 
	   (a<=l && c<=h) || (b<=h && c<=l) || (b<=l && c<=h))
		
		cout << "S";
		
	else
	
		cout << "N";
}
