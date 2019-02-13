#include <bits/stdc++.h>
using namespace std;

int main(){
	string S1,S2;
	int a=0;
	cin >> S1;
	cin >> S2;
	for(int i=0;i<S1.size();i++){
		if(tolower(S1[i])==tolower(S2[i]))
			continue;
		if(tolower(S1[i])>tolower(S2[i])){
			a++;
			break;
		}else if(tolower(S1[i])<tolower(S2[i])){
			a--;
			break;
		}
	}
	cout << a << '\n';
}
