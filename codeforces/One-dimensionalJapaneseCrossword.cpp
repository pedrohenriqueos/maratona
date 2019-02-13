#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	string str;
	vector<int> V;
	cin >> str;
	int cont=0;
	for(char c:str){
		if(c=='B')
			cont++;
		else if(cont!=0){
			V.push_back(cont);
			cont=0;
		}
	}
	if(cont!=0)
		V.push_back(cont);
	cout << V.size() << '\n';
	for(int a:V){
		cout << a << " ";
	}
}
