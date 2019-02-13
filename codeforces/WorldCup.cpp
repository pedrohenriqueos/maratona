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
	int N,A,B;	
	cin >> N >> A >> B;
	queue<int> q;
	REP(i,N) q.push(i+1);
	int k=0,cont=0,round=1,x=1;
	REP(j,N-1){
		cont++,k++;
		int a=q.front();
		q.pop();
		int b=q.front();
		q.pop();
		if((a==A and b==B) or (a==B and b==A)){
			if(j==(N-2))
				cout << "Final!\n";
			else
				cout << round << '\n';
			return 0;
		}else if(a==B or a==A){
			q.push(a);
		}else if(b==B or b==A){
			q.push(b);
		}else
			q.push(a);
		if((N >> x)==k){
			k=0,round++;
			x++;
		}
	}
	
}
