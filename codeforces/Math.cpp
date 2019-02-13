#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
#define f first
#define s second
#define pb push_back
#define all(a) a.begin(),a.end()
#define db(a) cerr << #a << " = " << a << '\n';
#define _ << " , " << 
#define int long long
typedef pair<int,int> ii;
typedef pair<int, ii> iii;

int prime[1000002],cont;
set<int> ver;
vector<int> P;
inline void crivo(){
	for(int i=2;i<1000001;i++){
		if(!prime[i]){
			P.pb(i);
			for(int j=2;j*i<1000001;j++)
				prime[j*i]= i;
		}
	}
}
inline vector<int> fat(int v){
	vector<int> f;
	for(int i=0;P[i]*P[i]<=v;i++){
		if(v%P[i]==0){
			int parc=0;
			f.pb(P[i]);
			while(v%P[i]==0){
				v/=P[i],parc++;
			}
			ver.insert(parc);
			cont=max(parc,cont);
		}
	}
	if(v!=1) f.pb(v),ver.insert(1);
	return f;
}
int32_t main(){
	crivo();
	int N;
	vector<int> F;
	cin >> N;
	if(N==1){
		return puts("1 0");
	}
	F = fat(N);
	int pot=0;
	for(int i=0;i<30;i++)
		if((1<<i)>=cont){
			pot = (1<<i);
			break;
		}
	int out=1;
	for(auto a:F)
		out*=a;
	cout << out << " " << log2(pot)+(((int)ver.size()!=1) or (pot!=cont and !(pot==1 and cont==0))) << '\n';
}



















