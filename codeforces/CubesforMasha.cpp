#include<bits/stdc++.h>
using namespace std;

int N,a;
int V[4][10];
bool check(int a){
	vector<int> A;
	while(a>0){
		A.push_back(a%10);
		a/=10;
	}
	vector<int> Aux;
	for(int i=0;i<N;i++)
		Aux.push_back(i);
	do{
		int i=0;
		for(int n=0;n<N;n++,i++){
			if(i==A.size()) break;
			if(!V[Aux[n]][A[i]])
				break;
		}
		if(i==A.size())
			return true;
	}while(next_permutation(Aux.begin(),Aux.end()));
	return false;
}
int main(){
	cin >> N;
	for(int n=0;n<N;n++)
		for(int i=0;i<6;i++){
			cin >> a;
			V[n][a]++;
		}
	int atual=0;
	while(check(atual+1)){
		atual++;
	}
	cout << atual << '\n';
}
