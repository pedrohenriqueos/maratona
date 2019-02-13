#include<bits/stdc++.h>

using namespace std;

int main(){
	int N;
	cin >> N;
	int i=1,j=N;
			int K=N/4;
	if(N%4==0){
		cout << "0\n";
		cout << N/2 << ' ';
		while(K--){
			cout << (i+=2) << " " << (j-=2) << " ";
		}
	}else if(N%2==0){
		cout << "1\n";
		cout << N/2 << " ";
		while(K--){
			cout << (i+=2) << " " << (j-=2) << " ";
		}
		cout << N/2 << '\n';
	}else{
	
	}
}
