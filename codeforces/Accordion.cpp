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
	string str;
	cin >> str;
	int save1=-1,save2=-1,out=-1;
	int size=(int)str.size();
	bool flag = false,flag2=false;
	for(int i=0;i<size;i++){
		if(str[i]=='[' and !flag){
			flag=true;
		}
		if(flag and str[i]==':'){
			save1=i;
			break;
		}
	}
	for(int i=size-1;i>=0;i--){
		if(str[i]==']' and !flag2){
			flag2=true;
		}
		if(flag2 and str[i]==':'){
			save2=i;
			break;
		}
	}
	if(save1>=save2 or save1==-1 or save2==-1)
		return puts("-1");
	int cont=0;
	for(int j=save1;j<=save2;j++)
		if(str[j]=='|')
			cont++;
	cout << cont+4LL << '\n';
}
