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
	int y,b,r;
	cin >> y >> b >> r;
	int out=0;
	if(y<b and y<(r-1))
		out=3*y+3;
	if(y>=(b-1) and b<r)
		out=max(out,3*b);
	else if(y>=(r-2) and b>=(r-1))
		out=max(out,3*r-3);
	cout << out << '\n';
}



















