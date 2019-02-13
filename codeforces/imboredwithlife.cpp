#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	int a=min(N,M);
	int fat=1;
	for(int i=2;i<=a;i++)
		fat*=i;
	cout << fat;
}
