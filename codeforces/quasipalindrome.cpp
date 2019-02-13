#include<bits/stdc++.h>
using namespace std;

int main(){
	int cont=0,cont2=0;
	string num,s;
	cin >> num;
	for(int i=num.size()-1;i>=0;i--){
		if(num[i]=='0')
			cont2++;
		else 
			break;
	}
	s=num.substr(0,num.size()-cont2);	
	for(int i=0;i<s.size();i++){
		if(s[i]=='0')
			cont++;
		else 
			break;
	}
	string v=s.substr(cont,s.size());
	s=v;
	reverse(v.begin(),v.end());
	if(s==v)
		printf("YES\n");
	else
		printf("NO\n");
}
