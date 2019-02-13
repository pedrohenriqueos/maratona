#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,sum1=0,sum2=0;
	cin >> N;
	vector<int> A(N),B(N);
	for(auto &a:A)
		cin >> a,sum1+=a;
	for(auto &b:B)
		cin >> b,sum2+=b;
	if(sum1<sum2)
		cout << "No\n";
	else
		cout << "Yes\n";
}
