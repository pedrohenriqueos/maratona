//Codeforces nivel C?
#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	map<string,int> D;
	pair< map<string,int>::iterator ,bool> r;
	while(N--){
		string s;
		cin >> s;
		r=D.insert(make_pair(s,0));
		if(r.second)
			cout << "OK\n";
		else{
			D[s]++;
			cout << s << D[s] << '\n';
		}
	}

}
