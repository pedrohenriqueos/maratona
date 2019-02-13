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

int V[4];
int32_t main(){
	int N,val;
	string str;
	cin >> N >> str;
	val=N/3;
	for(auto &c:str)
		V[c-'0']++;
	if(V[1]==V[2] and V[0]==V[1]){
		cout << str << '\n';
		return 0;
	}else{
		if(V[2]>V[0] and V[0]!=val and V[2]>val and V[0]<val){
			for(int i=0;i<N;i++){
				if(str[i]=='2'){
					V[2]--,V[0]++;
					str[i]='0';
					if(V[0]==val or V[2]==val) break;
				}
			}
		}
		if(V[1]>V[0] and V[0]!=val and V[1]>val and V[0]<val){
			for(int i=0;i<N;i++){
				if(str[i]=='1'){
					V[1]--,V[0]++;
					str[i]='0';
					if(V[0]==val or V[1]==val) break;
				}
			}
		}
		if(V[2]>V[1] and V[1]!=val and V[2]>val and V[1]<val){
			for(int i=0;i<N;i++){
				if(str[i]=='2'){
					V[2]--,V[1]++;
					str[i]='1';
					if(V[1]==val or V[2]==val) break;
				}
			}
		}
		if(V[0]>V[2] and V[2]!=val and V[0]>val and V[2]<val){
			for(int i=N-1;i>=0;i--){
				if(str[i]=='0'){
					V[0]--,V[2]++;
					str[i]='2';
					if(V[2]==val or V[0]==val) break;
				}
			}
		}
		if(V[1]>V[2] and V[2]!=val and V[1]>val and V[2]<val){
			for(int i=N-1;i>=0;i--){
				if(str[i]=='1'){
					V[1]--,V[2]++;
					str[i]='2';
					if(V[2]==val or V[1]==val) break;
				}
			}
		}
		if(V[0]>V[1] and V[1]!=val and V[0]>val and V[1]<val){
			for(int i=N-1;i>=0;i--){
				if(str[i]=='0'){
					V[0]--,V[1]++;
					str[i]='1';
					if(V[1]==val or V[0]==val) break;
				}
			}
		}
	}
	cout << str << '\n';
}














