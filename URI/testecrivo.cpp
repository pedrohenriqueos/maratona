#include<bits/stdc++.h>
using namespace std;

int val[10000000];
vector<int> prime;
void crivo(){
	val[1]=1;
	for(int i=2;i<10000000;i++)
		if(!val[i]){
			prime.push_back(i);
			for(int j=2;j*i<10000000;j++)
				val[i*j]=1;
		}
}
int main(){
	int N;
	cin >> N;
	crivo();
	cout << val[N] << '\n';
}
