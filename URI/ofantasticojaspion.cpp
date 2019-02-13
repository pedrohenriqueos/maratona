#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int N,M;
		map<string,string> F;
		scanf("%d %d",&N,&M);
		cin.ignore();
		while(N--){
			string str1,str2;
			cin >> str1;
			cin.ignore();
			getline(cin,str2);
			F[str1]=str2;
		}
		while(M--){
			string s2,p="";
			cin.ignore();
			getline(cin,s2);
			for(int i=0;i<s2.size();i++){
				if(s2[i]==' '){
						cout << F[p] << " ";
					p="";
				}else if(i==s2.size()-1){
						cout << F[p] << " ";
					p="";
				}else
					p+=s2[i];
			}
		}
	}
}
