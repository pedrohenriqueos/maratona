#include<bits/stdc++.h>
using namespace std;

class P{
	public:
		int X0,X1,Y0,Y1;
};
int main(){
	P p1,p2;
	cin >> p1.X0 >> p1.Y0 >> p1.X1 >> p1.Y1;
	cin >> p2.X0 >> p2.Y0 >> p2.X1 >> p2.Y1;
	if(p2.X0<=p1.X1 and p2.Y0<=p1.Y1 and p1.X0<=p2.X1 and p1.Y0<=p2.Y1)
		cout << "1\n";
	else
		cout << "0\n";
}
