#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while(cin >> N){
	if(N==0)
		break;
	char q[N];
	int p[N],pont=0,quant=0;
	string s[N];
	for(int i=0;i<N;i++)
		cin >> q[i] >> p[i] >> s[i];
	for(int i=0;i<N;i++)
		if(s[i]=="correct"){
			quant++;
			for(int k=0;k<i;k++)
				if(q[k]==q[i])
					pont+=20;
			pont+=p[i];
		}
		cout << quant << " " << pont << '\n';
	}
}
