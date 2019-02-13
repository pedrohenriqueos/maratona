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

int main(){
	string str,s="";
	cin >> str;
	bool flag=false;
	int cont1=0,cont2=1;
	char c=str[0];
	s+=str[0];
	FOR(i,1,str.size()){
		if(str[i]==str[i-1]){
			if(!flag){
				cont2++;
				if(cont2<=2 and cont1<2)
					s+=str[i];
				else
					cont2--;
				
			}else{
				cont1++;
				if(cont1<=2 and cont2<2){
					s+=str[i];
				}else
					cont1--;
			}
		}else{
			if(!flag){
				cont1=1;
			}else{
				cont2=1;
			}
			s+=str[i];
			flag = !flag;
		}
	}
	cout << s;
}
