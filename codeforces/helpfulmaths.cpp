#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	cin >> S;
	int A[(S.size()+1)/2],a=0;
	for(char c: S)
		switch(c){
			case '0':
				A[a]=0;
				a++;
				break;
			case '1':
				A[a]=1;
				a++;
				break;
			case '2':
				A[a]=2;
				a++;
				break;
			case '3':
				A[a]=3;
				a++;
				break;
			case '4':
				A[a]=4;
				a++;
				break;
			case '5':
				A[a]=5;
				a++;
				break;
			case '6':
				A[a]=6;
				a++;
				break;
			case '7':
				A[a]=7;
				a++;
				break;
			case '8':
				A[a]=8;
				a++;
				break;
			case '9':
				A[a]=9;
				a++;
				break;
		}
	sort(A,A+a);
	for(int i=0;i<a;i++){
	cout << A[i];
	if(i==a-1)
		cout << '\n';
	else
		cout << "+";
	}
}
