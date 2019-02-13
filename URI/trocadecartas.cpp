#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	while(cin >> N >> M){
		if(N==0 and M==0)
			break;
	int A,B,ant=0,cont=0;
	vector<int> seq1,seq2;
	for(int n=0;n<N;n++){
		cin >> A;
		if(n!=0){
		if(A!=ant){
			seq1.push_back(A);
			ant=A;	
		}
		}else{
			seq1.push_back(A);
			ant=A;
		}
	}
	for(int m=0;m<M;m++){
		cin >> B;
		if(m!=0){
		if(B!=ant){
			seq2.push_back(B);
			ant=B;	
		}
		}else{
			seq2.push_back(B);
			ant=B;
		}
	}
	for(int i=0;i<seq1.size();i++){
		vector<int>::iterator it=find(seq2.begin(),seq2.end(),seq1[i]);
		if(it!=seq2.end()){
			cont++;
		}
	}
	cout << min(seq1.size(),seq2.size())-cont << '\n';
	}
}
