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
	int N,Z=0;
	cin >> N;
	vector<string> A(N);
	vector<int> L,R;
	for(auto &str:A){
		cin >> str;
		int val=0;
		bool flag=false;
		stack<char> s;
		for(auto c:str){
			if(c==')'){
				if(!s.empty())
					s.pop();
				else
					flag=true,val--;
			}else{
				s.push(c);
			}
		}
		if(flag){
			if((int)s.size()==0)
				L.push_back(((int)s.size()+val));
		}else if((int)s.size()==0)
			Z++;
		else
			R.push_back((int)s.size());
	}
	int out=Z/2;
	for(int i=0;i<(int)R.size();i++)
		for(int j=0;j<(int)L.size();j++){
			if((R[i]+L[j])==0){
				out++;
				L.erase(L.begin()+j);
				break;
			}
		}
	cout << out << '\n';
}



















