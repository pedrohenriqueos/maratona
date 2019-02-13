#include <iostream>

using namespace std;

int main(){
	double A,B;
	cin >> A >> B;

	cout.precision(2);
	cout.setf(ios::fixed);
	cout << A/B <<"\n";
	return 0;
}
