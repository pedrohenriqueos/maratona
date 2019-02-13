#include<bits/stdc++.h>

using namespace std;

vector<int> div(int N){
	vector<int> aux;
	for(int i=2;i<=N;i++)
		if(N%i==0)
			aux.push_back(i);	
	return aux;
}

int main(){
	int N;
	cin >> N;
	string str;
	cin >> str;
	vector<int> divisores=div(N);
	for(int d:divisores){
		reverse(str.begin(),str.begin()+d);
	}
	cout << str << '\n';
}
