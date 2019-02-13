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

int N;

int main(){
	while(cin >> N){	
		vi A(N),B,C;
		int s=0;
		B.assign(N,0);
		C.assign(N,0);
		REP(i,N){
			cin >> A[i];
			if(i==0)
				B[i]=A[i];
			else
				B[i]=B[i-1]+A[i];
			s+=A[i];
		}
		if(s%3==0){
			int quant=0;
			REP(i,N){
				if(binary_search(B.begin()+i,B.end(),B[i]+(s/3)))
					if(binary_search(B.begin()+i,B.end(),B[i]+2*(s/3)))
						quant++;
			}
			cout << quant << '\n';
		}else
			cout << "0\n";
	}
}
