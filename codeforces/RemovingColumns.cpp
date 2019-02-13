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
	int N,M,out=0;
	cin >> N >> M;
	vector<string> str(N);
	for(auto &s:str) cin >> s;
	for(int i=0;i<(int)str[0].size();i++){
		bool flag=true;
		for(int k=0;k<N-1;k++)
				if(str[k].substr(0,i+1)>str[k+1].substr(0,i+1))
					flag=false;
				
		if(!flag){
			out++;
			for(int k=0;k<N;k++){
				string s="";
				for(int j=0;j<(int)str[k].size();j++)
					if(j!=i)
						s+=str[k][j];
				str[k]=s;
			}
			i--;
		}
	}
	cout << out << '\n';
}
