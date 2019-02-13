#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi 3.14
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

int T;
long double N,L,B,b,H;
int main(){
	cin >> T;
	while(T--){
		cin >> N >> L >> b >> B >> H;
		long double i=b,j=B,i1=0,j1=H;
		long double meio=(i+j)/2.0;
		long double meio1=(i1+j1)/2.0;
		long double volume = ((pi*meio1)/3)*(meio*meio+meio*b+b*b);
		long double v = L/N;
		int k = v*100;
		v=(double)k/100.0;
		k=volume*100;
		volume=(double)k/100.0;
		int a=1;
		while(true and a<10){
			a++;
			meio=(i+j)/2.0;
			meio1=(i1+j1)/2.0;
			volume = ((pi*meio1)/3)*(meio*meio+meio*b+b*b);
			k=volume*100;
			volume=(double)k/100.0;
			if(volume==v)
				break;
			else if(volume>v){
				j=meio-0.5;
				j1=meio1-0.5;
			}else{
				i=meio+0.5;
				i1=meio1+0.5;
			}
		}
		cout << volume << " " << v << '\n';
		cout << fixed << setprecision(2) << meio1 << '\n';
	}

}
