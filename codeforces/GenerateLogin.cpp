#include<bits/stdc++.h>
using namespace std;
int i;
string str1,str2;
int main(){
	cin >> str1 >> str2;
	cout<< str1[i++];
	while(i<str1.size() and str1[i]<str2[0])		
		cout << str1[i++];
	cout<< str2[0];
}
