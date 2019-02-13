#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		string A,B;
		cin >> A >> B;
		int a=0;
		bool s=true;
		if(A.size()>=B.size()){
		for(int j=A.size()-B.size();j<A.size();j++,a++){
			if(A[j]==B[a])
				continue;
			else{
				s=false;
				break;
			}		
		}
			(s) ? cout << "encaixa\n" : cout << "nao encaixa\n";
		}else
			cout << "nao encaixa\n";
	}
}
