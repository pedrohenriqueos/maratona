#include<bits/stdc++.h>
using namespace std;

int vet[30];

int main(){
	string str;
	while(getline(cin,str)){
		memset(vet,0,sizeof(vet));
		for(char c:str)
			if(c>='a' and c<='z')
				vet[c-(int)'a']++;
		bool flag=false;
		int a,b;
		vector< pair<int,int> > s;
		for(int i=0;i<=(int)('z'-'a')+1;i++){
			if(vet[i]>0 and !flag){
				flag=true;
				a=i;
			}else if(flag and vet[i]>0){
				continue;
			}else if(flag){
				b=i-1;
				flag=false;
				s.push_back(make_pair(a,b));
			}
		}
		if(s.size()==0){
			cout << '\n';
		}else
		for(int i=0;i<s.size();i++){
			if(i!=0)
				cout << ", ";		
			cout << (char)(s[i].first+(int)'a') << ":" << (char)(s[i].second+(int)'a');
			if(i==s.size()-1)
				cout << '\n';
		}
	}
}
