#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	while(N--){
		string s;
		cin >> s;
		sort(s.begin(),s.end());
		do{
			cout << s << '\n';
		}while(next_permutation(s.begin(),s.end()));
		cout << '\n';
	}
}