#include <bits/stdc++.h>
using namespace std;

bool prime(long long int n){
	if(n==1)
		return false;
	for(long long int i=2;i*i<=n;i++){
		if(n%i==0)
			return false;
		if(i%2==1)
			i++;
	}
	return true;
}	

int main(){
	long long int N;
	cin >> N;
	(prime(N))? cout << "S\n":cout << "N\n";
}
