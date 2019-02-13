#include <bits/stdc++.h>/*
#include <functional> //greater
#include <algorithm> //sort
#include <iostream>
#include <utility> //pair
#include <sstream>
#include <cstring> //memset
#include <complex>
#include <cstdio>
#include <string>
#include <vector>
#include <cctype> //isaplha, tolower
#include <deque>
#include <queue>
#include <stack>
#include <array>
#include <cmath> //sqrt, sin
#include <map>
#include <set>
//*/

#define ll long long int
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl "\n"
using namespace std;

template<class T> ostream &operator<<(ostream &os, const pair<T,T> &p){
	return os<<"("<<p.fi<<","<<p.se<<")";}
template<class T> ostream &operator<<(ostream &os, const pair<const T,T> &p){
	return os<<"("<<p.fi<<","<<p.se<<")";}
#define FOR(X,L,R) for(int X=L;X!=R;L<R?X++:X--)
#define FI(I,X) for(auto I=(X).begin();I!=(X).end();I++)
#define Print(X) {cerr<<"{ ";FI(I,X)cerr<<(I==(X).begin()?"":", ")<<*I;cerr<<" }\n";}
#define mset(V,X) memset(V,X,sizeof(V))
#define all(X) (X).begin(),(X).end()
#define upperb(V,X) (int)(upper_bound(all(V),(X))-V.begin())
#define lowerb(V,X) (int)(lower_bound(all(V),(X))-V.begin())

const double PI = acos(-1);
const int INF = 0x3f3f3f3f; //3f3f3f3f;
const int SZ = 2e5+10;
const ll mod = 1e9+7;

int main(){

	char s[SZ]; scanf("%s", s);
	deque<int> m; int total = 0;
	int n = strlen(s);
	int cont = 0;
	for(int i=0; i<n; i++){
		int x = s[i]-'0';
		x = x%3;
		if(x==0){
			cont++; total = 0; m.clear(); continue;
		} else {
			total += x;
			if(total%3==0){
				cont++; total = 0; m.clear(); continue;
			} else {
				if(m.size()==2){
					cont++; total = 0; m.clear(); continue;
				} else {
					if(m.size()==1 && x != m[0]){
						cont++; total = 0; m.clear(); continue;
					} else {
						m.pb(x);
					}
				}
			}
		}
	}
	cout<<cont<<endl;

	return 0;
}
