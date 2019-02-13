#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
//#define pi 3.141592653589793
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define REP(i,n) FOR(i,0,n)

typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long  ull;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ll > vll;
typedef vector< ii > vii;
typedef vector< iii > viii;

int N;
int main(){
	cin >> N;
	string str;
	int saida=0;
	cin >> str;
	FOR(i,1,str.size()){
		if(str[i]==str[i-1]){
			if((i+1)<str.size()){
				if(str[i]==str[i+1]){
					saida++;
					str[i]=((str[i]=='b')?'r':'b');
				}else{
					char k=str[i];
					str[i]=str[i+1];
					str[i+1]=k;
					saida++;
				}
			}else{
				saida++;
			}
		}
	}
	cout << saida << '\n';

}	
