#include<bits/stdc++.h>
using namespace std;

#define int long long
int32_t main(){
	int a,b;
	cin >> a >> b;
	if(a==b) return !printf("0\n");
	int r=0;
	int s;
	for(s=0LL;(1LL<<s)<=b;s++);
	s--;
	if((1LL<<s)>=a){
		for(int k=0LL;(1LL<<k)<=b;k++)
			r|=(1LL<<k);	
	}else{
		for(int x=a;x<b;x++)
			r=max(r,x^b);
	}
	printf("%lld\n",r);
}
