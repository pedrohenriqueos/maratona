#include<bits/stdc++.h>
using namespace std;

int V[30];
int main(){
	int T;
	string str;
	cin >> T;
	while(T--){
		bool flag=true;
		cin >> str;
		int N = (int)str.size();
		string aux = str;
		reverse(aux.begin(),aux.end());
		if(aux==str){
			flag=false;
			int cont=0,p=0;
			memset(V,0,sizeof V);
			for(int i=0;i<N;i++){
				if(!V[str[i]-'a'])
					cont++;
				if(cont>1 and str[i]!=str[p]){
					swap(str[i],str[p]);
					flag=true;
					break;  
				}
				V[str[i]-'a']++;
			}	
		}
		if(flag)
			cout << str << '\n';
		else
			puts("-1");
	}

}
