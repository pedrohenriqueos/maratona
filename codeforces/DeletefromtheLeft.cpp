#include<bits/stdc++.h>
using namespace std;

int main(){
	string str1,str2;
	cin >> str1 >> str2;
	if(str1.size()<str2.size()) swap(str1,str2);
	if(str1==str2){
		cout << "0\n";
		return 0;
	}
	int out=0;
	for(int i=str2.size()-1,j=1;i>=0;i--,j++){
		if(str2[i]==str1[str1.size()-j])
			out++;
		else break;
	}
	cout << str1.size()+str2.size()-2*out << '\n';
}
