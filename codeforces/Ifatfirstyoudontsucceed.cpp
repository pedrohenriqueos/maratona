#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
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

int A,B,C,N;
int main(){
	cin >> A >> B >> C >> N;
	if(C<=A and C<=B){
		int resp=N-(A+B-C);
		if(resp<=0){
			cout << "-1\n";
		}else
			cout << resp << '\n';
	}else{
		cout << "-1\n";
	}
}
