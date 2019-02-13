#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int N;
	cin >> N;
	for(long long int i=0;i<N;i++){
		long long int A,B,P;
		cin >> A >> B;
		list<long long int> C[A];
		for(long long int j=0;j<B;j++){
			cin >> P;
			C[P%A].push_back(P);
		}
		if(i!=0)
			cout << '\n';
		for(long long int j=0;j<A;j++){
			cout << j;
			while(!C[j].empty()){
				cout << " -> " << C[j].front();
				C[j].pop_front();
			}
			cout << " -> \\" << '\n'; 
		}
	}
}
