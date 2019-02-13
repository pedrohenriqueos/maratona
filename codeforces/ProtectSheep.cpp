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

int N,M;
int main(){
	cin >> N >> M;
	char Mat[N][M];
	bool flag=false;
	REP(i,N)
		REP(j,M){
			cin >> Mat[i][j];
			if(Mat[i][j]=='W')
				flag=true;
		}
	if(!flag){
		cout << "Yes\n";
		REP(i,N){
			REP(j,M){
				cout << Mat[i][j];	
			}
			cout << '\n';
		}
		//cout << '\n';
		return 0;
	}
	REP(i,N)
		REP(j,M){
			if(Mat[i][j]=='S'){
				if(Mat[i-1][j]=='W'){
					cout << "No\n";
					return 0;
				}else if(Mat[i-1][j]=='.'){
					Mat[i-1][j]='D';
				}
				if(Mat[i+1][j]=='W'){
					cout << "No\n";
					return 0;
				}else if(Mat[i+1][j]=='.'){
					Mat[i+1][j]='D';
				}
				if(Mat[i][j-1]=='W'){
					cout << "No\n";
					return 0;
				}else if(Mat[i][j-1]=='.'){
					Mat[i][j-1]='D';
				}
				if(Mat[i][j+1]=='W'){
					cout << "No\n";
					return 0;
				}else if(Mat[i][j+1]=='.'){
					Mat[i][j+1]='D';
				}
			}
		}
	cout << "Yes\n";
		REP(i,N){
			REP(j,M){
				cout << Mat[i][j];	
			}
			cout << '\n';
		}
		//cout << '\n';
}

