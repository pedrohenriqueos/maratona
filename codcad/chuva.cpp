#include<bits/stdc++.h>
using namespace std;


int main(){
	int N;
	scanf("%d",&N);
	vector<int> A(N);
	for(auto &a:A)scanf("%d",&a);
	int v = A[0],id=0,cont=0;
	for(int i=1;i<N;i++){
		if(A[i]>=v){
			if((i-id)>1)
				cont+=(i-1-id);
			v=A[i];
			id=i;
		}
	}
	if(id!=(N-1))
		cont+=()
	cout << cont << '\n';
}
