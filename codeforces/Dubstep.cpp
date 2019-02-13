#include<bits/stdc++.h>

using namespace std;

int main(){
	string str,out="";
	cin >> str;
	for(int i=0;i<str.size();i++){
		out.push_back(str[i]);
		if(out.size()>=3){
			string s=out.substr(out.size()-3,3);
			if(s=="WUB")
				out.pop_back(),out.pop_back(),out.pop_back(),out.push_back(' ');
		}
	}
	cout << out << '\n';
}
