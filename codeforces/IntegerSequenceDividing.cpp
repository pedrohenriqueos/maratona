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

int N;
string str;
int32_t main(){
	cin >> N;
	/*vector<int> A(N);
	for(auto &a:A) cin >> a;
	*/
	if(N%4==1 or N%4==2)
		cout << "1\n";
	else cout << "0\n";
	//cin >> str;
}
