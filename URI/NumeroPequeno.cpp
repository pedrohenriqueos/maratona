#include<bits/stdc++.h>

using namespace std;

int V[10];
int main(){
	string str;
	int K;
	while(cin >> str >> K){
		memset(V,0,sizeof V);
		int cont=0;
		for(auto &c:str)
			V[(int)(c-'0')]++;
		for(int i=9;i>=0;i--){
			if(V[i]){
				for(int j=0;j<(int)str.size();j++)
					if(str[j]==(char)(i+'0')){
						str.erase(str.begin()+j);
						j--;
						V[i]--;
						cont++;
						if(K==cont) break;
					}
			}
			if(K==cont) break;
		}
		if(str=="")
			cout << "0\n";
		else{
			bool z=false;
			for(auto &c:str){
				if(!z and c=='0')
					continue;
				cout << c;
				z=true;
			}
			cout << '\n';
		}
	}
}
