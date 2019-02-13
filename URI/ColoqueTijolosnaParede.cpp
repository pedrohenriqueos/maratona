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
	int	T;
	cin >> T;
	while(T--){
		int M[9][9];
		memset(M,0,sizeof M);
		for(int i=0;i<9;i+=2)
			for(int j=0;j<=(i+1);j+=2)
				cin >> M[i][j];
		for (int i = 0; i < 8; i += 2)
		{
			for (int j = 0; j <= (i + 1); j += 2)
			{
				M[i + 2][j + 1] = (M[i][j] - M[i + 2][j] - M[i + 2][j + 2]) / 2;
				M[i + 1][j] = M[i + 2][j] + M[i + 2][j + 1];
				M[i + 1][j + 1] = M[i + 2][j + 1] + M[i + 2][j + 2];
			}
}
		REP(i,9){
			for(int j=0;j<(i+1);j++){
				cout << M[i][j];
				if(i!=j) cout << " ";
			}
			cout << '\n';
		}
	}

}
