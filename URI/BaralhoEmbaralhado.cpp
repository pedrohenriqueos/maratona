#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f

bool check(vector<int> &A){
	for(int i=0;i<A.size();i++)
		if(A[i]!=i+1)
			return true;
	return false;
}

int main(){
	int P,cont=0;
	cin >> P;
	vector<int> A(P),B;
	int c=0;
	cout << P/4+1
	for(int i=1,j=P/2+1;i<=P/2;i++,j++){
		A[c++]=j;
		A[c++]=i;
	}
	while(check(A)){
		B=A;
		c=0;
		for(int i=0,j=P/2;i<(P/2);i++,j++){
			A[c++]=B[j];
			A[c++]=B[i];
		}
		cont++;
	}
	cout << cont+1 << '\n';	
}
