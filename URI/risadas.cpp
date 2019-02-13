#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin >> str;
	string s1="",s2="";
	for(char c:str){
		if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u')
			s1+=c,s2+=c;
		else if(c=='A' or c=='E' or c=='I' or c=='O' or c=='U')
			s1+=c,s2+=c;
	}
	reverse(s1.begin(),s1.end());
	bool flag=true;
	for(int i=0;i<s1.size();i++)
		if(s1[i]!=s2[i]){
			flag=false;
			break;
		}
	cout << ((flag)?"S\n":"N\n");
}
