#include<bits/stdc++.h>
using namespace std;

vector<int> pot;
map<int,int> ok,ok2;
main(){
	int N,out=0;
	scanf("%d",&N);
	vector<int> A(N),B,C;
	for(auto &a:A){
		scanf("%d",&a);
		if(a%2)
			B.push_back(a);
		else
			C.push_back(a);
	}
	sort(B.begin(),B.end());
	sort(C.begin(),C.end());
	for(int i=0;i<B.size();i++){
		for(int j=0;j<32;j++)
			if(binary_search(B.begin()+i+1,B.end(),(1<<j)-B[i])){
				ok[B[i]]=ok[(1<<j)-B[i]]=1;
				//cout << B[i] << " " << (1<<j)-B[i] << '\n';
			}
		out+=!ok[B[i]];
	}
	for(int i=0;i<C.size();i++){
		for(int j=0;j<32;j++)
			if(binary_search(C.begin()+i+1,C.end(),(1<<j)-C[i])){
				//cout << C[i] << " " << (1<<j)-C[i] << '\n';
				ok2[C[i]]=ok2[(1<<j)-C[i]]=1;
			}
		out+=!ok2[C[i]];
	}
	printf("%d\n",out);
}
