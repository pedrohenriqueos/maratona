#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,A,B,C,D,E,F,G;
	cin >> N;
	cin >> A >> B >> C >> D >> E >> F >> G;
	A-=(D+E);
	B-=(D+F);
	C-=(E+F);
	(A+B+C+D+E+F+G==N)?cout << "N\n":cout << "S\n";
}
