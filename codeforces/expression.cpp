#include <bits/stdc++.h>
using namespace std;

int main(){
	int A,B,C;
	cin >> A >> B >> C;
	if((A+B*C >= A*(B+C)) and (A+B*C >= A*B*C) and (A+B*C >= (A+B)*C) and (A+B*C >= A+B+C))
		cout << A+B*C << '\n';
	else if((A*(B+C) >= A+B*C) and (A*(B+C) >= A*B*C) and (A*(B+C) >= (A+B)*C) and (A*(B+C) >= A+B+C))
		cout << A*(B+C) << '\n';
	else if((A*B*C >= A+B*C) and (A*B*C >= A*(B+C)) and (A*B*C >= (A+B)*C) and (A*B*C >= A+B+C))
		cout << A*B*C << '\n';
	else if(((A+B)*C >= A+B*C) and ((A+B)*C >= A*(B+C)) and ((A+B)*C >= A*B*C) and ((A+B)*C >= A+B+C))
		cout << (A+B)*C << '\n';
	else
		cout << A+B+C << '\n';
}
