#include<bits/stdc++.h>
using namespace std;
#define mo 1000000007
int main(){
	long long p[1005];
	p[0]=1;
	for(int i=1;i<=1000;i++)
		p[i]=(p[i-1]*26)%mo;
	string str;
	while(cin >> str){
	long long j=0,saida=0;
	for(int i=str.size()-1;i>=0;i--,j++){
		long long aux=(int)(str[i]-'A');
		aux=(aux*p[j])%mo;
		saida=(saida+aux)%mo;
	}
	printf("%lld\n",saida%mo);
	}
}
