#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int n=0;n<N;n++){
		int A,B;
		map<string,string> M;
		cin >> A >> B;
		for(int a=0;a<A;a++){
			string s,p,aux;
			cin >> s;
			aux= s;
			cin.ignore();
			getline(cin,p);
			M.insert(pair<string,string>(aux,p));
		}
		pair<map<string,string>::iterator,bool> r;
		if(n!=0)
			cout << '\n';
		for(int b=0;b<B;b++){
			string s,k;
			getline(cin,s);
			int g=0;
			for(char c:s){
				if(c!=32)
					k+=c;
				if(c==32 or g==s.size()-1){
					if(M.find(k)!=M.end())
						cout << M.find(k)->second << " ";
					else
						cout << k << " ";
					k.clear();
				}
				g++;
			}
			cout << '\n';
		}
	}

}
