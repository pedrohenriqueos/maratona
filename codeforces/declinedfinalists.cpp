#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,maxa=0,a;
	cin >> N;
	while(N--){
		cin >> a;
		maxa=max(maxa,a); 
	}
	cout << max(0,maxa-25);
}
