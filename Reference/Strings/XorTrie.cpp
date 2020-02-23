//Codeforces - Vasiliy's Multiset - 706/D
#include<bits/stdc++.h>
using namespace std;

const int bit = 31;
const int limit = 200010;

int tree[(bit+1)*limit][2],id = 1;
int fim[(bit+1)*limit];
int sz[(bit+1)*limit];

inline void insert(bitset<bit> &s){
	int v = 0;
	sz[v]++;
	for(int i=bit;i>=0;i--){
		if(tree[v][s[i]]==0)
			tree[v][s[i]] = id++;
		v = tree[v][s[i]];
		sz[v]++;
	}
	fim[v]++;
}
inline void remove(bitset<bit> &s){
	int v = 0;
	sz[v]--;
	for(int i=bit;i>=0;i--){
		v = tree[v][s[i]];
		sz[v]--;
	}
	fim[v]--;
}
int query(bitset<bit> &s){
	int v=0;
	int num = 0;
	for(int i=bit;i>=0;i--){
		if(s[i]==0){
			if(tree[v][1] and sz[tree[v][1]]){
				num|=(1<<i);
				v = tree[v][1];
			}else
				v = tree[v][0];
		}else{
			if(tree[v][0] and sz[tree[v][0]]){
				v = tree[v][0];
			}else{
				num|=(1<<i);
				v = tree[v][1];
			}
		}
	}
	return num;
}
int32_t main(){
	bitset<bit> init(0);
	insert(init);
	int t;
	cin >> t;
	while(t--){
		char c;
		int x;
		cin >> c >> x;
		if(c=='+'){
			bitset<bit> aux(x);
			insert(aux);
		}else if(c=='-'){
			bitset<bit> aux(x);
			remove(aux);
		}else{
			bitset<bit> aux(x);
			int val = query(aux);
			cout << (x^val) << '\n';
		}	
	}
}
