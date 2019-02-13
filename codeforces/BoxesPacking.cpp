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


int main(){
	int N,a,saida=0;
	cin >> N;
	vi A(N);
	for(auto &a:A) cin >> a;
	sort(all(A));
	int ant=0,freq=0,i=0;
	vi Freq(N+1,0);
	for(auto a:A){
		if(a!=ant){
			Freq[i++]=freq;
			freq=1;
			ant=a;
		}else
			freq++;
	}
	Freq[i++]=freq;
	FOR(j,1,i){
		if(Freq[i]!=0){
			FORI(k,j-1,0){
				if((Freq[j]-Freq[k])>=0){
					Freq[k]=0;
				}
			}
		}
	}
	FOR(j,1,i)
		saida=max(saida,Freq[j]);
	cout << saida << '\n';
}
