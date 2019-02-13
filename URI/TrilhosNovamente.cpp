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

int N;

int main(){
	while(cin >> N and N){
		vector<char> A(N),OK(N);
		for(auto &a:A) cin >> a;
		for(auto &a:OK) cin >> a;
		stack<char> q;
		string s="";
		int i=0,j=0;
		bool flag=false,out=false;
		while(true){
			if(i==N and j==N) break;
			if(!q.empty()){
				if(q.top()==OK[j]){
					j++;
					cout << "R";
					s+=q.top();
					q.pop();
				}else if(!flag){
					cout << "I";
					q.push(A[i++]);
					if(i==N) flag=true;
				}else{
					out=true;
					break;
				}
			}else if(!flag){
				cout << "I";
				q.push(A[i++]);
				if(i==N) flag=true;
			}else{
				out=true;
				break;
			}
		}
		if(out)
			cout << " Impossible";
		cout << '\n';
	}	

}
