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

bool check(vss J[]){
	REP(i,P)
		if(J[i].size()==0){
			saida=i+1;
			return false;
		}
	return true;
}

bool ordem(ss a,ss b){
	return ((a.s==b.s)?(stoll(a.f)>stoll(b.f)):a.s<b.s);
}

int main(){
	while(cin >> P >> M >> N){
		if(P==0 and M==0 and N==0) break;
		vss J[P];
		list<ss> Saque;
		int topoS=0;
		stack< pair<ss,bool> > Jogo;
		int j=0;
		REP(i,N){
			string s1,s2;
			cin >> s1 >> s2;
			if(i<(P*M)){
				if(i==(M*(j+1))) j++;
				J[j].pb(mp(s1,s2));
			}else if(i==(P*M)){
				Jogo.push(mp(mp(s1,s2),false));
			}else{
				Saque.pb(mp(s1,s2));
			}
		}
		REP(i,P)
			sort(all(J[i]),ordem);
		
		int jogador=0;
		bool sentido=true;
		pair<ss,bool> carta = Jogo.top();
		if(carta.f.f=="12")
			sentido=!sentido;
		while(check(J)){
			bool joga=true;
			carta = Jogo.top();
			//cout << carta.f.f << "*" << carta.f.s << " | "<< jogador << '\n';
			//for(auto &a:J[jogador]) cout << a.f << "*" << a.s << " ";
			//cout << '\n';
			if(carta.f.f=="7" or carta.f.f=="1" or carta.f.f=="11"){
				if(!carta.s){
					carta.s=true;
					Jogo.pop();
					Jogo.push(carta);
					if(carta.f.f=="7"){
						ss c=Saque.back();
						Saque.pop_back();
						J[jogador].pb(c);
						c= Saque.back();
						Saque.pop_back();
						J[jogador].pb(c);
						joga=false;
						sort(all(J[jogador]),ordem);
					}else if(carta.f.f=="1"){
						ss c=Saque.back();
						Saque.pop_back();
						J[jogador].pb(c);
						joga=false;
						sort(all(J[jogador]),ordem);
					}else if(carta.f.f=="11")
						joga=false;
				}
			}
			if(joga){
				bool descarte=true;
				REP(j,J[jogador].size())
					if(J[jogador][j].f==carta.f.f or J[jogador][j].s==carta.f.s){
						Saque.push_front(carta.f);
						Jogo.push(mp(J[jogador][j],false));
						J[jogador].erase(J[jogador].begin()+j);
						descarte=false;
						break;
					}
				if(descarte){
					ss x=Saque.back();
					Saque.pop_back();
					//cout << c.f << "||" << c.s << '\n';
					if(x.f==carta.f.f or x.s==carta.f.s){
						Saque.push_front(carta.f);
						Jogo.push(mp(x,false));
					}else{
						J[jogador].pb(x);
						sort(all(J[jogador]),ordem);
					}
				}
			}
			//for(auto &a:J[jogador]) cout << a.f << "*" << a.s << " ";
			//cout << '\n';
			carta = Jogo.top();
			if(carta.f.f=="12")
				sentido=!sentido;
			if(sentido){
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
