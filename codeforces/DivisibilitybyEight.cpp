#include<bits/stdc++.h>
using namespace std;

bool flag=false;
string out;
int memo[1000],k;
map<string,int> Map;
bool check(string str,int num){
	return memo[num]=(num%8==0);
}
void dp(string str,set<int> Set,set<int> Set1){
	if(flag) return ;
	if(str.size()==0) return ;
	int num=0;
	if(str.size()==1)
		num=(int)(str[0]-'0'),Set.insert(num);
	else if(str.size()==2){
		for(auto &c:str)
			num=num*10+(int)(c-'0'),Set.insert((int)(c-'0'));
	}else{
		for(int i=str.size()-3;i<str.size();i++)
			num=num*10+(int)(str[i]-'0'),Set.insert((int)(str[i]-'0'));
	}
	for(auto &c:str)
		Set1.insert((int)(c-'0'));
	if(memo[num]!=-1){
		if(Set1.size()>Set.size()){
		for(int i=0;i<str.size();i++){
			string aux=str;
			aux.erase(aux.begin()+i);
			set<int> s1,s;
			dp(aux,s1,s);
			if(flag) return ;
		}
	 	return ;
		}
	}
	//cout << str << " " << num << '\n';
	if(str.size()==1 and (str=="8" or str=="0")){
		if(!flag)flag=true,out=str;
		memo[num]=1;
	}else if(str.size()==1) return ;
	if(!flag and check(str,num)){
		flag=true,out=str;
		memo[num]=1;
		return ;
	}
	for(int i=0;i<str.size();i++){
		string aux=str;
		aux.erase(aux.begin()+i);
		set<int> s1,s;
		dp(aux,s1,s);
		if(flag) return ;
	}
	if(!flag) memo[num]=0;
}
int main(){
	memset(memo,-1,sizeof memo);
	string str;
	cin >> str;
	set<int> s1,s;
	dp(str,s,s1);
	if(flag){
		cout << "YES\n" << out << '\n';		
	}else
		cout << "NO\n";
}
