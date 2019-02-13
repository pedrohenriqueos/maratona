#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,a;
	while(cin >> N and N){
		map<string,string> D;
		string s1,s2;
		int saida=0;
		while(N--){
			cin >> s1 >> s2;
			D.insert(make_pair(s1,s2));
		}
		scanf("%d",&a);
		while(a--){
			cin >> s1 >> s2;
			int v=0,cont=0;
			for(char c:D[s1]){
				if(s2[v]!=c)
					cont++;
				if(cont==2){ saida++;
					break;}
				v++;
			}
		}
		printf("%d\n",saida);
	}

}
