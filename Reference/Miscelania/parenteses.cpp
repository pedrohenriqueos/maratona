#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define inf 0x3f3f3f3f
#define pb push_back
#define all(A) A.begin(),A.end()
#define allr(A) A.rbegin(),A.rend()
#define MOD 1000000007


int last[1000002];
long long parc[1000002];
int32_t main(){
	memset(last,-1,sizeof last);
	string str;
	cin >> str;
	int n = str.size();
	long long ans = 0;
	for(int i=1;i<n;i++){
		if(str[i]==')'){
			int aux = i-1;
			long long cnt = 0;
			if(str[i-1]=='('){
				if(i-2>=0 and last[i-2]!=-1)
					last[i] = last[i-2],cnt+=parc[i-2];
				else
					last[i] = i-1;
			}else if(last[i-1]!=-1){
			if(last[i-1]-1>=0 and str[last[i-1]-1]=='('){
				int val = last[i-1]-1;
				if(val-1>=0 and last[val-1]!=-1)
					last[i] = last[val-1],cnt+=parc[val-1];
				else
					last[i] = val,cnt+=parc[val];
			}
			}
			if(last[i]!=-1)
				ans+=cnt+1,parc[i] = cnt+1;
		}
		
	}
	cout << ans << '\n';
}






