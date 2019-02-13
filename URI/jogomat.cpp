#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		string S;
		cin >> S;
		int a=(int)S[0]-48,b=(int)S[2]-48;
		if(a==b)
			cout << a*b << '\n';
		else if(S[1]==tolower(S[1]))
			cout << a+b << '\n';
		else
			cout << b-a << '\n';
	}
}
