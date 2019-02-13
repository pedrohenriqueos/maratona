#include<bits/stdc++.h>

using namespace std;

bool cmp(char a,char b){
	return ((a=='1' and b=='2')or(a=='0' and b=='1'));
}
int main(){
	string str;
	cin >> str;
	sort(str.begin(),str.end(),cmp);
	cout << str << '\n';

}
