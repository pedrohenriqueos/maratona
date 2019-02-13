#include<bits/stdc++.h>
using namespace std;

int main(){
	string num,cutoff;
	while(cin >> num >> cutoff){
		long long int saida=0;
		string::iterator it=find(cutoff.begin(),cutoff.end(),'.');
		bool point=false;
		for(char c:num){
			if(c=='.'){
				point=true;
				continue;
			}
			if(!point)
				saida=saida*10+((int)(c-'0'));
			else if(c<*it){
					break;
			}else if(c>*it){
					saida++;
					break;
			}else
				it++;
		}
		cout << saida << '\n';
	}
}
