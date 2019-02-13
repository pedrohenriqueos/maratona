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

string str1,str2,saida;
int vet1[10];
bool check(){
	FOR(i,0,str2.size())
		if((int)(saida[i]-'0')>(int)(str2[i]-'0'))
			return false;
	return true;
}
int main(){
	saida="";
	cin >> str1 >> str2;
	for(auto c:str1)
		vet1[(int)(c-'0')]++;
	int x=0;
	FORI(i,(int)(str2[x]-'0'),0)
		if(vet1[i]){
			saida+=(char)(i+'0');
			vet1[i]--;
			break;
		}
	x++;
	FORI(i,9,0)
		while(vet1[i]){
			saida+=(char)(i+'0');
			vet1[i]--;
		}
	while(!check()){
		cout << saida << '\n';
		FOR(i,x,saida.size())
			vet1[(int)(saida[i]-'0')]++;
		saida="";
		REP(i,x) saida+=str2[i];
		REP(j,x+1)
			FORI(i,(int)(str2[j]-'0'),0)
				if(vet1[i]){
					saida+=(char)(i+'0');
					vet1[i]--;
					break;
				}
		x++;
		FORI(i,9,0)
		while(vet1[i]){
			saida+=(char)(i+'0');
			vet1[i]--;
		}
	}
	cout << saida <<  '\n';
}
