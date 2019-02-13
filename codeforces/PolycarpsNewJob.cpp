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
	int T;
	scanf("%d",&T);
	int l=0,r=0,x,y;
	while(T--){
		char c;
		scanf(" %c %d %d",&c,&x,&y);
		if(c=='+'){
			if(x<=y)
				l=max(x,l),r=max(y,r);
			else
				l=max(y,l),r=max(x,r);
		}else{
			if(x<=y){
				if(l<=x and r<=y)
					puts("YES");
				else
					puts("NO");
			}else{
				if(r<=x and l<=y)
					puts("YES");
				else
					puts("NO");	
			}
		}
	}
}

















