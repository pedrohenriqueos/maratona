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

int w,h;
string str;
int32_t main(){
	cin >> w >> h;
	//cin >> str;
	vector<int> u(2),d(2);
	
	for(int i=0;i<2;i++) cin >> u[i] >> d[i];
	for(int j=h;j>=1;j--){
		w+=j;
		if(d[0]==j)
			w-=u[0];
		if(d[1]==j)
			w-=u[1];
		if(w<0) w=0;
	}
	cout << w << '\n';
}



















