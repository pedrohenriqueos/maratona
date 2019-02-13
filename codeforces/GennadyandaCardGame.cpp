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
	string s1,s2[5];
	cin >> s1;
	for(int i=0;i<5;i++)
		cin >> s2[i];
	for(int i=0;i<5;i++){
		if(s2[i][0]==s1[0] or s2[i][1]==s1[1])
			return puts("YES");
	}
	puts("NO");
}



















