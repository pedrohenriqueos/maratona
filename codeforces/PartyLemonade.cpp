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
typedef pair< ll , ll > pll;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< pll > vpll;
typedef vector< iii > viii;

int N,L;

/*ull knapsack(pll obj, ll aguenta){
	ull a=(ull)(1LL<<obj.s);
	if(tab[obj.f][aguenta]>=0) 
		return tab[obj.f][aguenta];
	if(obj==N or !aguenta) 
		return tab[obj][aguenta]=0;
	int nao_coloca=knapsack(obj+1, aguenta);
	if(peso[obj]<=aguenta){
		int coloca=valor[obj]+knapsack(obj+1, aguenta-peso[obj]);
		return tab[obj][aguenta]=max(coloca, nao_coloca);
	}
	return tab[obj][aguenta]=nao_coloca;
}*/
int main(){
	cin >> N >> L;
	vpll A(N);
	int i=0;
	for(auto &a:A){
		cin >> a.f;
		//valor[i]=a.f;
		a.s=i;
		i++;
	}
	sort(all(A),ordem);
	ull saida=0;
	for(auto &a:A){
		saida+=((a.f)*max((L/a.s),1LL));
		cout << a.f << " " << a.s << '\n';
		if(a.s>=L) break;
		L%=a.s;
		if(L<=0) break;
		
	}
	cout << saida << '\n';
}
