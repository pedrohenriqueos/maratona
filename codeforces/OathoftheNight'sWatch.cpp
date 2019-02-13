#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,a,mini=0x3f3f3f3f,maxi=0,freq1=1,freq2=1;
	cin >> N;
	int aux=N;
	while(aux--){
		cin >> a;
		if(a==maxi)
			freq1++;
		if(a==mini)
			freq2++;
		if(a>maxi)
			maxi=a,freq1=1;
		if(mini>a)
			mini=a,freq2=1;
	}
	if(maxi==mini)
		cout << "0\n";
	else
		cout << N-(freq1+freq2) << '\n';
}
