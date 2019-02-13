#include<bits/stdc++.h>
using namespace std;

int M[502][502];
int main(){
	int N,x,y;
	bool s=false;
	cin >> N;
	while(N--){
		cin >> x >> y;
		if(M[y][x])
			s=true;
		M[y][x]=1;
	}
	cout << ((s)?"1\n":"0\n");
}
