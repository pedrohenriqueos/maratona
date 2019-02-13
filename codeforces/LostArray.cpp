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
#define int long long
typedef pair<int,int> ii;
typedef pair<int, ii> iii;

int32_t main(){
	int N;
	cin >> N;
	vector<int> A(N),out;
	for(auto &a:A) cin >> a;
	int ini=0;
	for(int i=1;i<=N;i++){
		vector<int> x(i);
		bool flag=true;
		for(int j=0;j<N;j++){
			if(j%i!=j){
				if(x[j%i]+A[j-1]!=A[j]){
					flag=false;
					break;
				}
			}else{
				if(j!=0)
				x[j] = A[j]-A[j-1];
				else
				x[j] = A[j];
			}
		}
		if(flag)
			out.push_back(i);
	}
	cout << (int)out.size() << '\n';
	for(int i=0;i<(int)out.size();i++)
		cout << out[i] << " ";
}



















