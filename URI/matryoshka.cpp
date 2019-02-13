#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int V[N],A[N];
	for(int i=0;i<N;i++){
		cin >> V[i];
		A[i]=V[i];
	}
	sort(V,V+N);
	int S[N],s=0;
	for(int i=0;i<N;i++)
		if(V[i]!=A[i]){
		S[s]=A[i];
		s++;
		}
	
	sort(S,S+s);
	cout << s << '\n';
	for(int k=0;k<s;k++){
		cout << S[k];
		if(k==s-1)
			cout << '\n';
		else
			cout << " ";
	}

}
