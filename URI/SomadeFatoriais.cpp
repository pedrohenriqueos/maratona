#include<bits/stdc++.h>
using namespace std;

int main(){
	long long Fat[21];
	Fat[0]=1;
	for(int i=1;i<=20;i++)
		Fat[i]=Fat[i-1]*i;
	for(int i=1;i<=20;i++)
		cout << Fat[i] << " ";
	cout << '\n';
}
