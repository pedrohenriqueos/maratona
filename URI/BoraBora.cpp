#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi 3.14159265358979323846264338327950288
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define FORI(i,a,n) for(int i=a;i>=n;i--)
#define REP(i,n) FOR(i,0,n)
#define all(a) a.begin(),a.end()

typedef long long ll;
typedef unsigned long long  ull;
typedef vector<int> vi;
typedef vector< ll > vll;
typedef pair<int,int> ii;
typedef pair<string,string> ss;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< ss > vss;
typedef vector< iii > viii;

int P,M,N,saida;

int ordem(ss a,ss b){
	return (a.s==b.s)?stoll(a.f)>stoll(b.f):a.s>b.s;
}
bool check(vss J[]){
	REP(i,P)
		if(J[i].size()==0){
			saida=i+1;
			return false;
		}
	return true;
}
int main(){
	//ios_base::sync_with_stdio(false);cin.tie(nullptr);
	while(cin >> P >> M >> N){
		if(P==0 and M==0 and N==0) break;
		//cout << "a" << '\n';
		bool sentido=false;
		vss A(N),J[P];
		stack<ss> Jogo,Saque;
		for(auto &c:A) cin >> c.f >> c.s;	
		REP(y,P){
			int j=y*M;
			while(j<(M*(y+1))){
				J[y].pb(A[j]);
				j++;
			}
		}
		REP(i,P){
			sort(all(J[i]),ordem);
			//cout << "Jogador " << i << '\n';
			//REP(j,J[i].size()) cout << J[i][j].f << "*"<<J[i][j].s << " ";
			//cout << '\n';
		}
		Jogo.push(A[P*M]);
		FORI(h,N-1,P*M+1)
			Saque.push(A[h]);
		int jogador=0;
		bool direito;
		int stop=1;
		ss efeito=mp("q","a");
		while(check(J) or stop<=10){
			stop++;
			direito=true;
			ss carta_topo=Jogo.top();
			cout << jogador << '\n';
			cout << carta_topo.f << " " << carta_topo.s << '\n';
			cout << efeito.f << "*" << efeito.s << '\n';
			if(carta_topo.f=="12" and efeito.f!=carta_topo.f and efeito.s!=carta_topo.s){
				sentido=!sentido;
				efeito=carta_topo;
			}else if(carta_topo.f=="7" and efeito.f!=carta_topo.f and efeito.s!=carta_topo.s){
				J[jogador].pb(Saque.top());
				Saque.pop();
				J[jogador].pb(Saque.top());
				Saque.pop();
				direito=false;
				efeito=carta_topo;
			}
			else if(carta_topo.f=="1" and efeito.f!=carta_topo.f and efeito.s!=carta_topo.s){
				J[jogador].pb(Saque.top());
				Saque.pop();
				direito=false;
				efeito=carta_topo;
			}	
			else if(carta_topo.f=="11" and efeito.f!=carta_topo.f and efeito.s!=carta_topo.s){
				direito=false;
				efeito=carta_topo;
			}
			if(direito){
				bool descarte=false;
				REP(j,J[jogador].size())
					if(J[jogador][j].f==carta_topo.f or J[jogador][j].s==carta_topo.s){
						Jogo.push(J[jogador][j]);
						J[jogador].erase(J[jogador].begin()+j);
						descarte=true;
						break;
					}
				if(!descarte) J[jogador].pb(Saque.top()),Saque.pop();
				if(J[jogador][J[jogador].size()-1].f==carta_topo.f or J[jogador][J[jogador].size()-1].s==carta_topo.s){
					Jogo.push(J[jogador][J[jogador].size()-1]);
					J[jogador].erase(J[jogador].begin()+(J[jogador].size()-1));
				}
			}
			if(!sentido){
				jogador++;
				if(jogador==P)
					jogador=0;
			}else{
				jogador--;
				if(jogador==-1)
					jogador=P-1;
			}
		}
		cout << saida << '\n';
	}	

}
