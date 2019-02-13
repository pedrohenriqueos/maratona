#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define MAXN 101
#define pb push_back
#define mp make_pair
typedef pair<int,pair<int,int> > piii;

int N,M,C,pai[MAXN],peso[MAXN],Mat[MAXN][MAXN];
vector<piii> Aresta;

bool comp(piii k,piii x){
	return (k.f)<(x.f);
}

int find(int x){
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}
void join(int a, int b){   
    a = find(a);
    b = find(b);
    if(peso[a] < peso[b]) pai[a] = b;
    else if(peso[b] < peso[a]) pai[b] = a;
    else{
        pai[a] = b;
        peso[b]++;
    }   
}

int main(){
	int a,b,c;
	cin >> N >> M >> C;
	int K=C+M,cont=0;
	for(int i=0;i<K;i++){
		cin >> a >> b >> c;
		if(!Mat[a][b]){
			Aresta.pb(mp(c,mp(a,b)));
			Mat[a][b]=c;
		}
	}
	for(int i=0;i<=N;i++)
		pai[i]=i;
	sort(Aresta.begin(),Aresta.begin()+M,comp);
	sort(Aresta.begin()+M,Aresta.end(),comp);
	long long int saida=0;
	for(int i = 0;i<Aresta.size();i++){
        if(find(Aresta[i].s.f) != find(Aresta[i].s.s) ){
            join(Aresta[i].s.f, Aresta[i].s.s);
			saida+=Aresta[i].f;
        }
    }
	cout << saida << '\n';
}
