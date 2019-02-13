#include<bits/stdc++.h>

using namespace std;

int v[30];
int main(){
	int N,M;
	cin >> N >> M;
	string str;
	cin >> str;
	for(char c:str){
		v[(int)(c-'a')]++;
	}
	for(int i=0;i<30;i++){
		M-=v[i];
		v[i]=0;
		if(M<=0){
			v[i]=-M;
			break;
		}
	}
	string out="";
	for(int i=str.size()-1;i>=0;i--)
		if(v[(int)(str[i]-'a')]){
			v[(int)(str[i]-'a')]--;
			out+=str[i];
		}	
	reverse(out.begin(),out.end());
	cout << out << '\n';
}
