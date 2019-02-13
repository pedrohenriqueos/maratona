#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		if(i==0)
			cin.ignore();
		string S,A;
		getline(cin,S);
		for(int i=S.size()-1;i>=0;i--){
			if((S[i]>=65 and S[i]<=90) or(S[i]>=97 and S[i]<=122))
				S[i]+=3;
			A+=S[i];
		}
		for(int i=((A.size())/2);i<A.size();i++)
			A[i]--;
		cout << A <<'\n';
	}
}
