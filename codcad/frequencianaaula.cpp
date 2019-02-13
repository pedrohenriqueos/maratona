#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int N,a;
	cin >> N;
	set<long long int> A;
	for(long long int n=0;n<N;n++){
		cin >> a;
		if(!(A.find(a)!=A.end()))
			A.insert(a);
	}
	cout << A.size() <<'\n';
}
