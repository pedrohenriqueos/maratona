#include<bits/stdc++.h>

using namespace std;

int bit[100002],F[100002],S[100002];
int update(int x,int v){
	while(x<=100000){
		bit[x]+=v;
		x+=(x&-x);
	}
}
int sum(int id){
	int s=0;
	while(id>0){
		s+=bit[id];
		id-=(id&-id);
	}
	return s;
}
int main(){
	int N,out=0;
	cin >> N;
	vector<int> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
		if(!F[A[i]])
			update(i,1);
		F[A[i]]++;
	}
	int at=A[0];
	cout << "here\n";
	for(int i=1;i<N;i++){
		if(A[i]!=at and S[at]==0){
			out+=(sum(100000)-sum(i-1))+(F[A[i]]>1);
			S[at]=1;
			at=A[i];
		}
	}
	cout << out << '\n';
}
