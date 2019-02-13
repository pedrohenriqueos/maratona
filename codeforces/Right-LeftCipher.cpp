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
	string str,out="";
	cin >> str;
	if((int)str.size()==1)
		return cout << str << '\n',0;
	int mid=ceil((int)str.size()/2.0)-1;
	out+=str[mid];
	int l=mid-1,r=mid+1,cont=(int)str.size()-1;
	bool flag=false;
	while(cont--){
		if(!flag)
			out+=str[r++];
		else
			out+=str[l--];
		flag=!flag;
	}
	cout << out << '\n';
}



















