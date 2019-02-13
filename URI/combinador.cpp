#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	while(N--){
		string S1,S2;
		cin >> S1 >> S2;
		for(int s1=0,s2=0;s1<S1.size() or s2<S2.size();s1++,s2++){
			if(s1<S1.size())
				cout << S1[s1];
			if(s2<S2.size())
				cout << S2[s2];
		}
		cout << '\n';
	}
}
