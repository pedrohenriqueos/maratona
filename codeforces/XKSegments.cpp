#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define REP(i,n) FOR(i,0,n)

typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< iii > viii;

int main(){
	int N,X,K,saida=0;
	cin >> N >> X >> K;
	int A[N];
	REP(i,N){ 
		cin >> A[i];
		REP(j,i+1){
			if(A[i]==A[j] and A[i]%X==0){
				if(i==j)
				saida++;
				else
				saida+=2;
			}else{
				if(abs((A[j]/X)-(A[i]/X))==K)
					saida++;
			}
		}
			
	}
	cout << saida << '\n';
}
