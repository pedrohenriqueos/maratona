#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,a,b,c;
	cin >> N >> a >> b >> c;
	cout << max(min(min(a,b)*(N-1)+c,min(a,b)+c*(N-2)),0);
}
