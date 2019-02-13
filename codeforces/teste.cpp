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
#define int long long
typedef long long ll;
typedef unsigned long long  ull;
typedef vector<int> vi;
typedef vector< ll > vll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< iii > viii;

int N,K,A,B;
int32_t main(){
	cin >> N >> K >> A >> B;
	int x=N,saida=0;
	while(x>1){
		if(K==1){
			saida+=(x-1)*A;
			break;
		}
		if(x<K){
			saida+=(x-1)*A;
			break;
		}
		if((x-1)*A<=B){
			saida+=(x-1)*A;
			break;
		}
		if(x%K==0){
		x/=K;
		saida+=B;
		}else{
			int q=x%K;
			x-=q,saida+=(A*q);
		}
	}
	cout << saida << '\n';
}
