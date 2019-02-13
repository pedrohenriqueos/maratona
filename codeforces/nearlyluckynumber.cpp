#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	int lucky=0,lucky2=0;
	cin >> S;
	for(char c:S){
		if(c=='4')
			lucky++;
		if(c=='7')
			lucky2++;
	}
	(((lucky!=0 and lucky2!=0)and(lucky+lucky2==S.size())) or(lucky+lucky2==4 or lucky+lucky2==7)) ? cout << "YES\n" : cout << "NO\n";
}
