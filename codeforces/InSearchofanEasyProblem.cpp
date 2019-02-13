#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
#define f first
#define s second
#define pb push_back
#define all(a) a.begin(),a.end()
#define db1(a) cerr << a << '\n'
#define db2(a,b) cerr << a << " " << b << '\n'
#define db3(a,b,c) cerr << a << " " << b << " " << c << '\n'

typedef vector<int> vi;
typedef vector< long long > vll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< iii > viii;

int32_t main(){
	int N;
	scanf("%d",&N);
	vector<int> A(N);
	for(auto &a:A){
		scanf("%d",&a);
		if(a) return !printf("HARD");
	}
	printf("EASY");

}






