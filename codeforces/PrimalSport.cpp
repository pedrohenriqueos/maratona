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
int c;
int fat(int n){
	int cont=0;
	int save=n;
	bool flag=false;
	for(int x=2;x*x<=n;x++){
		flag=false;
		while(n%x==0){
			cout << x << " ";
			n/=x;
			if(!flag)
				cont++;
			if(cont>2 or flag) return 0;
			flag=true;
		}
	}
	if(n==save){
		cout << n;
		c=-1;
		return 0;
	}
	return (cont==2);
}
int main(){
	int N;
	cin >> N;
	FORI(i,N-1,0){
		if(fat(i)){
			c++;
		}
		if(c==2){
			cout << i << '\n';
			return 0;
		}
		if(c==-1) return 0;
	}
}
