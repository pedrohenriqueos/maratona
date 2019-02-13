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
	long long n,x,y;
	cin >> n >> x >> y;
	long long xb=x,yb=y;
	long long db=n-max(xb,yb),dw=0;
	xb=max(xb,yb);
	yb=xb;
	db+=abs(xb-x)+abs(yb-y);
	xb=x,yb=y;
	dw=min(xb,yb)-1;
	xb=min(xb,yb);
	yb=xb;
	dw+=abs(xb-x)+abs(yb-y);
	if(db<dw)
		puts("Black");
	else
		puts("White");
}



















