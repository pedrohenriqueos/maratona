#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define MAXN 40001
#define pb push_back
#define mp make_pair
typedef pair<int,pair<int,int> > piii;

int N,M,pai[MAXN],peso[MAXN];
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
	while(cin >> N >> M){
	if(N==0 and M==0) break;
	int a,b,c;
	Aresta.clear();
	for(int i=0;i<M;i++){
		cin >> a >> b >> c; 
		Aresta.pb(mp(c,mp(a,b)));
	}
	for(int i=0;i<N;i++)
		pai[i]=i;
	sort(Aresta.begin(),Aresta.end(),comp);
	long long int saida=0;
	for(int i = 0;i<M;i++){
        if(find(Aresta[i].s.f) != find(Aresta[i].s.s) ){
            join(Aresta[i].s.f, Aresta[i].s.s);
			saida+=Aresta[i].f;
        }
    }
	cout << saida << '\n';
	}
}
