#include <bits/stdc++.h>
using namespace std;

int main(){
	int X1,X2,Y1,Y2,X,Y;
	while(cin >> X1 >> Y1 >> X2 >> Y2){
		if(X1==0 and Y1==0 and X2==0 and Y2==0)
			break;
		if(X1>X2)
			X=X1-X2;
		else
			X=X2-X1;
		if(Y1>Y2)
			Y=Y1-Y2;
		else
			Y=Y2-Y1;
		if(X==0 and Y==0)
			cout << "0\n";
		else if(X==0 or Y==0)
			cout << "1\n";
		else if(X==Y)
			cout << "1\n";
		else
			cout << "2\n";
	}

}
