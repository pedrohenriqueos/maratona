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
	int a,b;
	cin >> a >> b;
	int s = a+b;
	int time=1,k=0;
	while(time+k<=s){
		k+=time;
		time++;
	}
	time--;
	int v1=0,v2=0;
	vector<int> A,B;
	for(int i=time;i>=1;i--){
		if(v1+i<=a){
			A.push_back(i);
			v1+=i;
		}else
			B.push_back(i),v2+=i;
	}
	cout << (int)A.size() << '\n';
	for(auto &a:A) cout << a << " ";
	puts("");
	cout << (int)B.size() << '\n';
	for(auto &a:B) cout << a << " ";
	puts("");
}
