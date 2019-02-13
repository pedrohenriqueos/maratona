#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,quant=0;
	cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<n;i++)
		if(a[i]>=a[k-1] and a[k-1]>=0 and a[i]>0)
			quant++;
	cout << quant << '\n';
}
