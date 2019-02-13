#include<bits/stdc++.h>

using namespace std;

int V[30];
int main(){
	int N;
	cin >> N;
	string str;
	cin >> str;
	if(N==1) return !printf("Yes\n");
	for(auto &c:str){
		V[(int)(c-'a')]++;
		if(V[(int)(c-'a')]>1)
			return !printf("Yes\n");
	}
	printf("No\n");
	cerr << "str = " << " " << str << '\n';
}
