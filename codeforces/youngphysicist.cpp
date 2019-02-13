#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int X=0,x,Y=0,y,Z=0,z;
	for(int i=0;i<N;i++){
		cin >> x >> y >> z;
		X+=x;
		Y+=y;
		Z+=z;
	}	
	(X==0 and Y==0 and Z==0) ? cout << "YES\n" : cout << "NO\n";
}
