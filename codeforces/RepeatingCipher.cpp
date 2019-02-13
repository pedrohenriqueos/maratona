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

int V[30];
int32_t main(){
	int N;
	string str,out="";
	cin >> N >> str;
	int l=0,r=55,mid=0;
	while(l<=r){
		mid=(l+r) >> 1;
		if(mid*mid+mid==2*N)
			break;
		else if(mid*mid+mid>2*N)
			r=mid-1;
		else l=mid+1;
	}
	int save=0;
	for(int i=1;i<=mid;i++){
		out+=str[save];
		save+=i;
	}
	cout << out << '\n';
}



















