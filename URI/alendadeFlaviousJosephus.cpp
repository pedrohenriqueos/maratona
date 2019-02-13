#include<bits/stdc++.h>
using namespace std;

int DP[10002];

int main(){
	int N;
	cin >> N;
	for(int n=0;n<N;n++){
		int A,B;
		cin >> A >> B;
		DP[0]=1;
		for(int x=1;x<=A;x++)
				DP[x] = (DP[x-1]+B-1)%x+1;
		cout << "Case " << n+1 << ": " << DP[A] <<'\n';
		
	}
}
