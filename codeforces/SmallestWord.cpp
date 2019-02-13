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
#define mmin(a,b) ((a>b)?b:a)
typedef pair<int,int> ii;
typedef pair<int, ii> iii;

int32_t main(){
	string str;
	cin >> str;
	bool flag=false;
	int N=(int)str.size();
	vector<int> A(N,0);
	for(int i=0;i<N;i++){
		if(!flag){
			if(str[i]=='a'){
				if((i-1)>=0)
					A[i-1]=1;
				flag=!flag;
			}
		}else{
			if(str[i]=='b')
				A[i-1]=1,flag=!flag;
		}
	}
	if(flag) A[N-1]=1;
	for(auto &a:A) cout << a << " ";
	puts("");
}



















