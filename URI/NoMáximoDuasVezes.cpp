#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
//#define pi 3.141592653589793
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define FORi(i,a,n) for(ull i=a;i>=n;i--)
#define REP(i,n) FOR(i,0,n)

typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long  ull;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ll > vll;
typedef vector< ii > vii;
typedef vector< iii > viii;

string N;
int v[11];
int main(){
	cin >> N;
	REP(i,N.size()){
		v[N[i]-'0']++;
		if(v[N[i]-'0']>2){
			int j,a=0,ua=;
			for(j=i;j>=0;j--){
				if(j>0 and N[j]=='0' and N[j-1]=='1')
					a++;
				if(a==2)
					break;
			}
			if(a==2){
				int cont=0;
				char atual='0';
				for(int k=j;k<N.size();k++){
					N[k]=atual;
					cont++;
					if(cont==2){
						if(atual=='0') atual='9';
						else atual--;
						cont=0;
					}
				}
			}
			else{
				

			}
		}
	}

}
