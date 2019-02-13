#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int N;
	while(cin >> N){
		if(N==0)
			break;
		long long int max=N;
		while(N>1){
			if(N%2==0)
				N/=2;
			else{
				N=N*3+1;
				if(N>max)
					max=N;
			}
		}
		cout << max << '\n';
	}
}
