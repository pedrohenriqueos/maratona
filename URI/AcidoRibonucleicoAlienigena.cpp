#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while(cin >> str){
		stack<char> s;
		int out=0;
		for(auto c:str){
			if(s.empty()){
				s.push(c);
			}else if((c=='B' and s.top()=='S') or(c=='S' and s.top()=='B') or (c=='C' and s.top()=='F') or (c=='F' and s.top()=='C')){
				out++;
				s.pop();
			}else
				s.push(c);
		}
		cout << out << '\n';
	}

}
