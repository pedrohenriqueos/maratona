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
	string str="";
	while(getline(cin,str)){
		if(str=="esquerda")
			cout << "ingles\n";
		else if(str=="direita")
			cout << "frances\n";
		else if(str=="nenhuma")
			cout << "portugues\n";
		else
			cout << "caiu\n";
		str="";
	}
}
