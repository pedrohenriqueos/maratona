#include<bits/stdc++.h>
using namespace std;

bool ordem(string a,string b){
	return a>b;	
}
int main(){
	int T;
	while(cin >> T){
		string a;
		vector<string> D;
		while(T--){
			cin >> a;
			D.push_back(a);
		}
		sort(D.begin(),D.end(),ordem);
		int k=0;
		for(int i=0;i<D.size()-1;i++){
			int a=0;
			for(char c:D[i]){
				if(c==D[i+1][a])
					k++,a++;
				else
					break;
			}
		}
		cout << k << '\n';
	}

}
