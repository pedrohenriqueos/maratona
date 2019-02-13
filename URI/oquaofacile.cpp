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
	int comp=0,quant=0;
	while(getline(cin,str)){
		string aux="";
		comp=quant=0;
		bool flag=true;
		FOR(i,0,str.size()){
			if(tolower(str[i])>='a' and tolower(str[i])<='z' and flag)
				aux+=str[i];
			else if(str[i]=='.' and ((((i+1)<str.size()) and str[i+1]==' ') or ((i+1)==str.size())) and flag){
				//cout << aux << '\n';
				if(aux.size()>0){
				comp+=aux.size(),aux="";
				quant++;
				}
			}else if(str[i]==' '){
				flag=true;
				//cout << aux << "*\n";
				if(aux.size()>0){comp+=aux.size(),aux=""; quant++;}
			}
			else
				aux="",flag=false;
		}
		if(aux!="") comp+=aux.size(),quant++;
		//cout << comp << " " << quant << '\n';
		if(quant>0){
			int med = comp/quant;
			cout << ((med<=3)?"250":(med<=5)?"500":"1000") << '\n';
		}else
			cout << "250\n";
		//cin.ignore();
	}
}
