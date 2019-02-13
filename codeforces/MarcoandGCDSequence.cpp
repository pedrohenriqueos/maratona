#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	return ((b==0)?a:gcd(b,a%b));
}

int main(){
	int N;
	cin >> N;
	set<int> S;
	int A[N];
	for(int i=0;i<N;i++){
		cin >> A[i];
		if(i!=0){
		int g=A[0];
		for(int j=0;j<i;j++){
			g=gcd(A[j+1],g);	
		}
		if(g!=1)
			S.insert(A[i]);
		else
		}
	}
	if(S.size()==0)
		cout << "-1\n";
	else
		cout << S.size() << '\n';
	for(set<int>::iterator it=S.begin();it!=S.end();it++)
		cout << *it << " ";

}
