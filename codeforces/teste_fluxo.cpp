#include <bits/stdc++.h>
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
#define _ cout << x << '\n';
typedef long long ll;
typedef unsigned long long  ull;
typedef vector<int> vi;
typedef vector< ll > vll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< iii > viii;

const int MAX = 6*(1e4)+5000;
struct edge{
    int v, f, c;
    edge(int _v, int _f, int _c){
        v = _v, f = _f, c = _c;
    }
};
 
vector<edge> edges;
vi G[MAX];
int tempo=1,cor[MAX],N;
char Mat[MAX][MAX];
 
void add_edge(int u, int v, int cp, int rc){
    edges.push_back(edge(v, 0, cp));
    G[u].push_back(edges.size()-1);
    edges.push_back(edge(u, 0, rc));
    G[v].push_back(edges.size()-1);
}
int dfs(int s, int t, int f){
    if(s == t) return f;
    cor[s] = tempo;
    for(int e : G[s])
        if(cor[edges[e].v] < tempo and edges[e].c-edges[e].f > 0)
            if(int a = dfs(edges[e].v, t, min(f, edges[e].c-edges[e].f))){
                edges[e].f += a;
                edges[e^1].f -= a;
                return a;
            }
    return 0;
}

int MaxFlow(int s, int t){
    int mf = 0;
    while(int a = dfs(s, t, inf))
        mf += a, tempo++;
    return mf;
}
string str;
int main(){
	 cin >> str;

}
