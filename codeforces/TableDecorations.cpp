#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,c;
	cin >> a >> b >> c;
	long long M =max(a,max(b,c));
	long long m =min(a,min(b,c));
	long long s = a+b+c-M-m;
	if(((m+s)*2)>=M){
		printf("%lld\n",(long long)floor((a+b+c)/3));
	}else{
		printf("%lld\n",m+s);
	}
}
