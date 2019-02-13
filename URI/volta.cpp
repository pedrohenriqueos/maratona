#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,i;
	cin >> N >> M;
	for(i=2;;i++){
		if(M*(i-1)>=N*i)
			break;
	}
	cout << i << '\n';
}
