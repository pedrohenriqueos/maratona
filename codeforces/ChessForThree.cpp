#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int A,j1=1,j2=2,esp=3;
	bool flag=false;
	for(int i=0;i<N;i++){
		cin >> A;
		if(!flag)
		(A==j1)?j2=6-j1-j2:(A==j2)?j1=6-j1-j2:flag=true;
	}
	cout << ((flag)?"NO\n":"YES\n");
	
}
