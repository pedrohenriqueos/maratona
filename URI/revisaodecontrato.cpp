#include <bits/stdc++.h>
using namespace std;

int main(){
	char s;
	string S;
	while(cin >> s >> S){
		string A;
		if(s=='0' and S=="0")
			break;
		bool zero=false;
		for(char c:S)
			if((c!=s and c!='0') or (c=='0' and zero)){
				A+=c;
				zero=true;
			}
		(A.size()>=1) ? cout << A << '\n': cout << "0\n";
	}

}
