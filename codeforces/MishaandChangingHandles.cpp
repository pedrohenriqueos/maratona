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
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< iii > viii;

int N,i,p[2005],K[2005];

int find(int u){
	return (u==p[u])?u:find(p[u]),K[p[u]]=u;
}
int find2(int u){
	return (K[u]==u)?u:K[u]=find2(K[u]);
}
void join(int u,int v){
	u=find(u),v=find(v);
	p[u]=v;
}

int main(){
	cin >> N;
	string str1,str2;
	map<string,int> M;
	pair< map<string,int>::iterator, bool > r;
	while(N--){
		cin >> str1 >> str2;
		r=M.insert(mp(str1,i));
		if(r.s){ i++,p[i]=i;K[i]=i;}
		r=M.insert(mp(str2,i));
		if(r.s){ i++,p[i]=i;K[i]=i;}
		join(M[str1],M[str2]);
	}
	vi A;
	REP(j,i){
		int a=find(j);
		int x=find2(a);
		if(a==x) continue;
		bool flag=false;
		REP(x,A.size())
			if(A[x]==a){
				flag=true;
				break;
			}
		if(!flag){
			map<string,int>::iterator it=M.begin();
			REP(k,a)
				it++;
			cout << it->f << " ";
			it=M.begin();
			REP(k,x)
				it++;
			cout << it->f << '\n';
		}
		A.pb(a);
	}

}
