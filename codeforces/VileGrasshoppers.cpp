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

int p,y;
bool prime(int a){
	if(a%2==0) return false;
	FOR(i,3,min(p+1,(int)sqrt(a)+1)){
		if((a%i)==0)
			return false;
		i++;
	}
	return true;
}
int main(){
	cin >> p >> y;
	if(y%2==0) y--;
	FORI(i,y,p+1){
		if(prime(i)){
			printf("%d\n",i);
			return 0;
		}
		i--;
	}
	printf("-1\n");
	return 0;
}
