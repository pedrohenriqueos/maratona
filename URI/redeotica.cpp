#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define MAXN 102
#define pb push_back
#define mp make_pair
typedef pair<int,pair<int,int> > piii;
typedef pair<int,int>  pii;
int N,M,pai[MAXN],peso[MAXN];

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
	int a,b,c,caso=1;
	while(cin >> N >> M){
		if(N==0) break;
		memset(peso,0,sizeof(peso));
		priority_queue< piii,vector<piii>,greater<piii> > pq;
		priority_queue< pii,vector<pii>,greater<pii> > mst;
		for(int i=0;i<M;i++){
			cin >> a >> b >> c; 
			pq.push(mp(c,mp(min(a,b),max(b,a))));
		}
		for(int i=1;i<=N;i++)
			pai[i]=i;
		for(int i=0;i<M;i++){
			piii a=pq.top();
			pq.pop();
		    if(find(a.s.f)!=find(a.s.s)){
		        join(a.s.f, a.s.s);
				mst.push(mp(a.s.f, a.s.s));
		    }
		}
		cout << "Teste " << caso++ << '\n';
		while(!mst.empty()){
			pii m = mst.top();
			mst.pop();
			cout << m.f << " " << m.s <<'\n';
		}
		cout << '\n';
		}
}
