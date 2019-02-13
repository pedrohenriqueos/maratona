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

ll a,b;
void passo1();
void passo2();
void passo3();
int main(){
	cin >> a >> b;
	passo1();
	cout << a << " " << b << '\n';
}
void passo1(){
	if(a==0 or b==0) return ;
	else passo2();
}
void passo2(){
	if(a>=(2*b)){
		a=(a-((2*b)*(a/(2*b))));
		passo1();
	}else{
		passo3();
	}
}
void passo3(){
	if(b>=(a*2)){
		b=b-((2*a)*(b/(2*a)));
		passo1();
	}
	return ;
}
