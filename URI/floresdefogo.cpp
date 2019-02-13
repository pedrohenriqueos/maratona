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

double X1,Y1,R1,X2,Y2,R2;
int main(){
	while(cin >> R1 >> X1 >> Y1 >> R2 >> X2 >> Y2){
		double dist=sqrt((X1-X2)*(X1-X2)+(Y1-Y2)*(Y1-Y2));
		if(dist<=(R1-R2))
			cout << "RICO\n";
		else
			cout << "MORTO\n";
	}
}
