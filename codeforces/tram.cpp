#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,t=0,m=0;
	cin >> n;
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		t-=a;
		t+=b;
		if(t>m)
		m=t;
	}
	cout << m << '\n';
}
