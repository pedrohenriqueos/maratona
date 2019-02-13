#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int a=0;
	cin >> s;
	for(char c:s)
		a+=(int)(c-'0');
	cout << a%3 << '\n';
}
