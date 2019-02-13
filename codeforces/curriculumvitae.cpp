#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,a;
	cin >> N;
	vector<int> A;
	while(N--){
		cin >> a;
		A.push_back(a);
	}
	int cont=0;
	for(int i=1;i<A.size();i++){
		if(A[i]==0 and A[i-1]==1)
			cont++;
	}
	cout << A.size()-cont << '\n';
}
