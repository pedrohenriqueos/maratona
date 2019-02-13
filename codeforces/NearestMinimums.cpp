#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
//#define pi 3.141592653589793
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define REP(i,n) FOR(i,0,n)

typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long  ull;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ll > vll;
typedef vector< ii > vii;
typedef vector< iii > viii;

ll N;
int main(){
	cin >> N;
	vll A(N);
	vll B;
	ll saida=N+10,min=1000000000,i=0;
	for(auto &a:A){
		cin >> a;
		if(a<min){
			B.clear();
			min=a;
			B.push_back(i);
		}else if(a==min)
			B.push_back(i);
		i++;
	}
	REP(i,B.size()-1)
		if(saida>(B[i+1]-B[i]))
			saida =B[i+1]-B[i];
	cout << saida << '\n';
}
