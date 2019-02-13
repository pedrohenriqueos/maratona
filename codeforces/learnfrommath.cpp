#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,num1=0,num2=0;
	cin >> N;
	if(N%2==0){
		num1=8;
		num2=N-8;
	}else{
		num1=9;
		num2=N-9;
	}
	cout << num2 << " " << num1 << '\n';
}
