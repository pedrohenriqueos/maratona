#include <bits/stdc++.h>
using namespace std;

bool v(int a,int b){
	return a>b;
}

int main(){
	int N,total=0,quant=1,tp;
	cin >> N;
	int A[N];
	for(int i=0;i<N;i++){
		cin >> A[i];
		total+=A[i];
	}	
	sort(A,A+N,v);
	tp=A[0];
	total-=A[0];
	for(int i=1;i<N;i++){
		if(tp<=total){
			tp+=A[i];
			total-=A[i];
			quant++;	
		}
	}
	cout << quant << '\n';



}
