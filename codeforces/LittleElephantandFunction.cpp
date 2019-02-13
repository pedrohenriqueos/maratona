#include<bits/stdc++.h>
using namespace std;

int arr[1002],N;
void func(int n){
	if(n==0) return ;
	swap(arr[n-1],arr[n]);
	func(n-1);
}

int main(){
	cin >> N;
	for(int i=0;i<N;i++)
		arr[i]=i+1;
	func(N-1);
	for(int i=0;i<N;i++)
		cout << arr[i] << ' ';
	cout << '\n';
}
