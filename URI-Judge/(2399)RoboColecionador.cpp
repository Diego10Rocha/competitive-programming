#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define dbg cout<<"debug\n"
int main() {
	desync;
	int n, m, s, lo, co; 
	//n e m, dimensão da arena; 
	//lo-linha atual; 
	//co-coluna atual;
	cin >> n >> m >> s;
	while(n!=0 || m!=0 || s!=0){
		int contador=0;
		//contador de estrelas coletadas pelo robô
		string inst, dir;
		char arena[n][m];
		//arena[n][m]-arena; 
		//inst- instruções que o robô deve seguir; 
		//dir- direção atual do robô;
		for(int i = 0; i < n; i ++){
			for(int j = 0; j < m; j ++){
				cin >> arena[i][j];
				if(arena[i][j]!='.' && arena[i][j]!='#' && arena[i][j]!='*'){
					lo = i;
					co = j;
					dir = arena[i][j];
				}
			}
		}
		cin >> inst;
		for(int i = 0; i < s; i ++){
			if(inst[i]=='E'){
				if(dir=="N")
					dir = "O";
				else if(dir=="S")
					dir = "L";
				else if(dir=="L")
					dir = "N";
				else if(dir=="O")
					dir = "S";
			}else if(inst[i]=='D'){
				if(dir=="N")
					dir = "L";
				else if(dir=="S")
					dir = "O";
				else if(dir=="L")
					dir = "S";
				else if(dir=="O")
					dir = "N";
			}else{
				if(dir=="N" && arena[lo-1][co]!='#' && (lo-1>=0)){
					lo--;
					if(arena[lo][co]=='*'){
						contador+=1;
						arena[lo][co]='.';
					}
				}else if(dir=="S" && arena[lo+1][co]!='#' && (lo+1<n)){
					lo++;
					if(arena[lo][co]=='*'){
						contador+=1;
						arena[lo][co]='.';
					}
				}else if(dir=="L" && arena[lo][co+1]!='#' && (co+1<m)){
					co++;
					if(arena[lo][co]=='*'){
						contador+=1;
						arena[lo][co]='.';
					}
				}else if(dir=="O" && arena[lo][co-1]!='#' && (co-1>=0)){
					co--;
					if(arena[lo][co]=='*'){
						contador+=1;
						arena[lo][co]='.';
					}
				}
			}	
		}
	cout << contador<<endl;
	cin >> n >> m >> s;
	}
}
