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
	int N;
	bool flag=false;
	string str;
	cin >> N >> str;
	for(int i=0;i<(N-1);i++){
		if(str[i]>str[i+1]){
			flag=true;
			str.erase(str.begin()+i);
			break;
		}
	}
	if(!flag)
		str.erase(str.begin()+N-1);
	cout << str << '\n';
}



















