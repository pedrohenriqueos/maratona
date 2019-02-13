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

int main(){
	int k1,k2,k3;
	cin >> k1 >> k2 >> k3;
	bool flag=true;
	FOR(i,1,100){
		FOR(j,1,100){
			FOR(k,1,100){
				flag=true;
				int valor=max(i,max(j,k))+11;
				vi v(valor,0);
				int aux1=i,aux2=j,aux3=k;
				while(aux1<valor){
					v[aux1]=1;
					aux1+=k1;
				}	
				while(aux2<valor){
					v[aux2]=1;
					aux2+=k2;
				}
				while(aux3<valor){
					v[aux3]=1;
					aux3+=k3;
				}
				FOR(l,valor-11,valor)
					if(v[l]==0){
						flag=false;
						break;
					}
				if(flag) break;
			}
			if(flag) break;
		}
		if(flag) break;
	}
	cout << ((flag)?"YES\n":"NO\n");
}
