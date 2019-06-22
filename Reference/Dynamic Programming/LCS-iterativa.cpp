#include<bits/stdc++.h>
using namespace std;

void mmax(int &a,int b){
	a = max(a,b);
}

int32_t main(){
    cin >> s1 >> s2;
    int sz1=(int)s1.size(),sz2=(int)s2.size();
	for(int i=0;i<=sz1;i++)
		for(int j=0;j<=sz2;j++){ 
			if(i) mmax(pd[i][j],pd[i-1][j]);
			if(j) mmax(pd[i][j],pd[i][j-1]);
			if(i<sz1 and j<sz2) 
				if(s1[i]==s2[j])
					mmax(pd[i+1][j+1],pd[i][j]+1);
		}
	string out ="";
	int i=sz1,j=sz2,p=pd[sz1][sz2];
	while(p--){
		while(pd[i][j]==pd[i-1][j]) i--;
		while(pd[i][j]==pd[i][j-1]) j--;
		i--,j--;
		out+=s1[i];
	}
	reverse(all(out));
	cout << out << '\n';
}

