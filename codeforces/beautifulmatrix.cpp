#include <bits/stdc++.h>
using namespace std;

int main(){
	int N[5][5],s;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++){
			cin >> N[i][j];
			if(N[i][j]==1)
				s=abs(i-2)+abs(j-2);
		}
	cout << s << '\n';
}
