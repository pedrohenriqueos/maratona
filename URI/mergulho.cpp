#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,R;
	while(cin >> N >> R){
	int A[R],a=0;
	for(int r=0;r<R;r++)
		cin >> A[r];
	if(N!=R){
	sort(A,A+R);
	for(int n=1;n<=N;n++){
		if(A[a]!=n){
			cout << n << " ";
		}else
			a++;
	}
	}else
		cout << "*";
	cout << '\n';
	}
}
