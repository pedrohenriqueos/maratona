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
	int size=(int)str.size();
	int N,cont=0;
	cin >> N;
	bool flag=false;
	for(auto c:str){
		if(c=='*' or c=='?') cont+=2;
		if(c=='*') flag=true;	
	}
	if((size-cont)>N)
		return puts("Impossible");
	int m=size-cont;
	if(flag){
		bool flag2=false;
		string out="";
		for(int i=0;i<size;i++){
			if(str[i]=='*' or str[i]=='?') continue;
			if(i<(size-1) and str[i+1]=='*' and m==N) continue;
			if(i<(size-1)){
				if(str[i+1]=='?')
					continue;
				else if(str[i+1]=='*' and !flag2){
					for(int k=1;k<(N-m);k++)
						out+=str[i];
					m=N;
				}
					
			}
			out+=str[i];
		}
		cout << out << '\n';
	}else if((size-(cont/2))>=N){
		int m=size-cont;
		string out="";
		for(int i=0;i<size;i++){
			if(str[i]=='?')
				continue;
			if(str[i+1]=='?' and m!=N)
				m++;
			else if(str[i+1]=='?')
			 	continue;
			out+=str[i];
		}
		cout << out << '\n';
	}else
		puts("Impossible");
}



















