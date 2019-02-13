#include<bits/stdc++.h> 
using namespace std;

int main(){
	int N,cont=0;
	cin >> N;
	vector<int> A(2*N);
	for(auto &a:A)cin >> a;
	for(int i=0;i<2*N;i+=2){
		int j=i+1;
		while(A[i]!=A[j]) j++;
		while(j!=(i+1)){
			cont++;
			swap(A[j],A[j-1]);
			j--;
		}
	}
	cout<< cont << '\n';
}
