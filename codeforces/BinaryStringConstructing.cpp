#include<bits/stdc++.h>
using namespace std;

int main(){
	int A,B,X;
	cin >> A >> B >> X;
	string str="";
	bool flag=false;
	if(A>B){
		str+='0';
		A--;
		while(X--){
			if(flag)
				str+='0',A--;
			else
				str+='1',B--;
			flag=!flag;
		}
	}else{
		str+='1';
		B--;
		while(X--){
			if(!flag)
				str+='0',A--;
			else
				str+='1',B--;
			flag=!flag;
		}
	}
	for(int i=0;i<str.size();i++){
		cout << str[i];
		if((str.size()-2)==i){
			if(str[i]=='0'){
				while(A--) cout << "0";
				while(B--) cout << "1";
			}else{
				while(B--) cout << "1";
				while(A--) cout << "0";
			}
		}
	}
	cout << '\n';
}
