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

typedef pair<int,int> ii;
typedef pair<int, ii> iii;

int32_t main(){
	int a,b,c;
	cin >> a >> b >> c;
	int m1=max(a,max(b,c)),m2 = min(a,min(b,c)),m3 = a+b+c-m1-m2,cont=0;
	if((m2+m3)<=m1)
		cont+=m1-(m2+m3)+1;
	cout << cont << '\n';
}














