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

int32_t main(){
	int B,cont=0;
	cin >> B;
	for(int i=1;i*i<=B;i++){
		if(B%i==0 and i*i!=B){
			cont+=2;
		}else if(B%i==0 and i*i==B)
			cont++;
	}
	cout << cont << '\n';
}














