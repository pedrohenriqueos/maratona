#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,a;
	cin >> N;
	priority_queue<int> A,B,C,D;
	for(int i=0;i<N;i++){
		cin >> a;
		A.push(a);
	}
	for(int i=0;i<N-1;i++){
		cin >> a;
		B.push(a);
		C.push(a);
	}
	while(true){
		int u=A.top(),k;
		if(B.size()>0)
			k=B.top();
		else{
			cout << u << '\n';
			break;
		}
		if(u==k){
			A.pop();
			B.pop();
		}else{
			cout << u << '\n';
			break;
		}
	}
	for(int i=0;i<N-2;i++){
		cin >> a;
		D.push(a);
	}
	while(true){
		int u=C.top(),k;
		if(D.size()>0)
			k=D.top();
		else{
			cout << u << '\n';
			break;
		}
		if(u==k){
			C.pop();
			D.pop();
		}else{
			cout << u << '\n';
			break;
		}
	}
}	
