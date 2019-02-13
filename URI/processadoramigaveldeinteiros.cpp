#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi 3.14159265358979323846264338327950288
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define FORI(i,a,n) for(int i=a;i>=n;i--)
#define REP(i,n) FOR(i,0,n)
#define all(a) a.begin(),a.end()

typedef long long ll;
typedef unsigned long long  ull;
typedef vector<int> vi;
typedef vector< ll > vll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< iii > viii;

string str;

int main(){
	while(getline(cin,str)){
		string aux="";
		bool flag=false;
		bool num=false;
		int cont=0;
		for(auto &c:str){
			if(c>='0' and c<='9'){
				aux+=c;
				num=true;
			}else if(tolower(c)=='o' and num)
				aux+='0';
			else if(tolower(c)=='o') cont++;
			else if(c=='l')
				num=true,aux+='1';
			else if(c==' ' or c==',')
				continue;
			else{
				cout << "error\n";
				flag=true;
				break;
			}
		}
		if(cont>0 and num) flag=true,cout << "error\n";
		if(cont==str.size() and str!="") flag=true,cout << "0\n";
		if(flag) continue;
		if(aux==""){
			cout << "error\n";
		}else{
			string k="";
			if(aux[0]=='0'){
				int i=1;
				while(aux[i]=='0')
					i++;
				FOR(j,i,aux.size()) k+=aux[j];

				if(k.size()>10){
					cout << "error\n";
				}else if(k.size()>0){
					ll x = stoll(k);
					if(x>2147483647) cout << "error\n";
					else cout << x << '\n';
				}else
					cout << "0\n";
			}else{
				if(aux.size()>10){
					cout << "error\n";
					continue;
				}else{
					ll x = stoll(aux);
					if(x>2147483647) cout << "error\n";
					else cout << x << '\n';
				}
			}
		}
	}
}
