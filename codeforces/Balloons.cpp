#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
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

int N,S[100];
int main(){
	cin >> N;
	vi A(N);
	for(auto &a:A)
		cin >> a;
	if(N==1){
		cout << "-1\n";
		return 0;
	}
	vector<int> R;
	R.push_back(1);
	int parc1=A[0],parc2=A[1];
	for(int i=2;i<N;i++){
		if(parc1<=parc2){
			if((parc1+A[i])!=parc2){
				parc1+=A[i];
				R.push_back(i+1);
			}else{
				parc2+=A[i];
			}
		}else{
			if((parc2+A[i])!=parc1)
				parc2+=A[i];
			else{
				parc1+=A[i];
				R.push_back(i+1);
			}
		}
	}
	if(parc1==parc2){
		cout << "-1\n";
		return 0;
	}
	cout << R.size() << '\n';
	for(auto &r:R)
		cout << r << " ";
	cout << '\n';
}
