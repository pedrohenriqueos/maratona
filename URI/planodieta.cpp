#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	bool che=false;
	cin >> N;
	for(int n=0;n<N;n++){
		if(n==0)
			cin.ignore();
		string S,A,B,K;
		getline(cin,S);
		getline(cin,A);
		getline(cin,B);
		A+=B;
		for(int i=0;i<A.size();i++){
			if(!(find(S.begin(),S.end(),A[i])!=S.end())){
				che=true;
				break;
			}
		}
		if(!che)
			for(int i=0;i<S.size();i++){
				if(!(find(A.begin(),A.end(),S[i])!=A.end())){
					K+=S[i];
				}
			}
		bool ordena=false;
		if(!che){
		while(!ordena){
		ordena=true;
			for(int i=1;i<K.size();i++)
				if((int)K[i-1]>(int)K[i]){
					swap(K[i-1],K[i]);
					ordena=false;
				}	
		}
		}
		if(che){
			cout << "CHEATER\n";
		}else{
			cout << K << '\n';	
		}
		che=false;
	}
}
