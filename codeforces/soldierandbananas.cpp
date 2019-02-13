#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int k,n,w,s;
	cin >> k >> n >> w;
	if(w%2==0)
		s=(((w+1)*(w/2))*k)-n;
	else if(w>1)
		s=((((w)*((w-1)/2))+w)*k)-n;
	else
		s = (w*k)-n;
	(s>=0) ? cout << s << '\n' : cout << "0" << '\n';
}
