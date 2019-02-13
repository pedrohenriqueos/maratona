#include<bits/stdc++.h>
using namespace std;

int main(){
	string str,fim="";
	while(getline(cin,str)){
		if(str=="0") break;
		string aux="";
		vector<int> q;
		for(char c:str){
			if(c==' '){
				q.push_back(aux.size());
				if(aux.size()>=fim.size())
					fim=aux;
				aux="";
			}else
				aux+=c;
		}
		q.push_back(aux.size());
		if(aux.size()>=fim.size())
					fim=aux;
		for(int i=0;i<q.size();i++){
			if(i!=0)
				cout << "-";
			cout << q[i];
		}
		cout << '\n';
	}
	cout << "\nThe biggest word: " << fim << '\n';
}
