#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N,K;
	cin >> N >> K;
	if((K-N)<0){
		cout << K/2-(K%2==0);
	}else{
		if((K-N)>=N)
			cout << "0\n";
		else{
			long long d=N-(K-N);
			if(d&1)
				d++;
			cout << (d/2LL)-((N-K)==0);
		}
	}

}
