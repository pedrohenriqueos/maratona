#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,max=0;
	while(cin >> N and N){
		if(N>max)
			max=N;
	}
	cout << max << '\n';
}
