#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	cout << ((M>N)?((N%2==0)?"Malvika\n":"Akshat\n"):((M%2==0)?"Malvika\n":"Akshat\n"));
}
