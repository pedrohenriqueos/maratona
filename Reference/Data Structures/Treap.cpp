#include <bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

struct node {
	int x, priori, size,query;
	node *l, *r;
	node(int _x) : x(_x), priori(rng()), query(_x), size(1), l(NULL), r(NULL) {}	
};

class Treap {
private:
	node* root;
	int size(node* t) { return t ? t->size : 0; }
	int query(node *t){ return t ? t->query: -inf; } //Query type
	node* refresh(node* t) {
		if (!t) return t;
		t->size = 1 + size(t->l) + size(t->r);
		t->query = t->x;
		t->query = max(query(t),max(query(t->r),query(t->l))); //Query type
		return t;
	}
	void split(node* &t, int k, node* &a, node* &b) {
		node* aux;
		if (!t) a = b = NULL;
		else if (t->x < k) {
			split(t->r, k, aux, b);
			t->r = aux;
			a = refresh(t);
		}
		else {
			split(t->l, k, a, aux);
			t->l = aux;
			b = refresh(t);
		}
	}
	node* merge(node* a, node* b) {
		if (!a or !b) return a ? a : b;
		if (a->priori < b->priori) {
			a->r = merge(a->r, b);
			return refresh(a);
		}
		else {
			b->l = merge(a, b->l);
			return refresh(b);
		}
	}
	node* count(node* t, int k) {
		if (!t) return NULL;
		else if (k < t->x) return count(t->l, k);
		else if (k == t->x) return t;
		else return count(t->r, k);
	}
	node* nth(node* t, int n) { // 1-idexed
		if (!t) return NULL;
		if (n <= size(t->l)) return nth(t->l, n);
		else if (n == size(t->l) + 1) return t;
		else return nth(t->r, n-size(t->l)-1);
	}
	void del(node* &t) {
		if (!t) return;
		if (t->l) del(t->l);
		if (t->r) del(t->r);
		delete t;
		t = NULL;
	}
public:
	Treap() : root(NULL) { }
	~Treap() { clear(); }
	void clear() { del(root); }
	int size() { return size(root); }
	bool count(int k) { return count(root, k) != NULL; }
	bool insert(int k) {
		if (count(k)) return false;
		node *a, *b;
		split(root, k, a, b);
		root = merge(merge(a, new node(k)), b);
		return true;
	}
	bool erase(int k) {
		node * f = count(root, k);
		if (!f) return false;
		node *a, *b, *c, *d;
		split(root, k, a, b);
		split(b, k+1, c, d);
		root = merge(a, d);
		delete f;
		return true;
	}
	int nth(int n) {
		node* ans = nth(root, n);
		return ans ? ans->x : -1;
	}
	int query(int l, int r) { // range [l,r) -> os elementos
		if (l > r) swap(l, r);
		node *a, *b, *c, *d;
		split(root, l, a, d);
		split(d, r, b, c);
		int ans = query(b);
		root = merge(a, merge(b, c));
		return ans;
	}
};

int vet[10000009];

void test() {
	set<int> s;
	Treap t;
	int N = 1000000,quant = 0;
	for(int i=0; i<N; i++) {
		if(i%10000==0 and i!=0){
			int l = rng()%quant , sz = rng()%(quant-l);
			int r = l+sz;
			l++,r++;
			int x = t.query(t.nth(l),t.nth(r));
			int valac=-inf;
			for(int pos = l;pos<r;pos++){
				valac = max(valac,t.nth(pos));
			}
			if(valac!=x){
				printf("failed test %d, valac(%d) , x(%d), range[%d ... %d]\n",i,valac,x,l,r);
				for(int pos = l;pos<r;pos++)
					printf("val %d: %d\n",pos,t.nth(pos));
				exit(0);
			}
		}else{
			int n = rng()%1000;
			if(!s.count(n)) {
				s.insert(n);
				t.insert(n);
				quant++;
				//if(!t.insert(n)) printf("error inserting %d in treap!\n", n);
				//printf("inserted %d\n", n);
			}
			else{
				quant--;
				s.erase(n);
				t.erase(n);
				//if(!t.erase(n)) printf("error erasing %d in treap!\n", n);
				//printf("erased %d\n", n);
			}
			n = rng()%1000;
			if (s.count(n) != t.count(n)) {
				printf("failed test %d, s.count(%d) = %d, t.count(%d) = %d\n", i, n, (int)s.count(n), n, t.count(n));
			}
		}
	}
	s.clear();
	t.clear();
	for(int i=0; i<N; i++) {
		vet[i] = i+1;
	}
	random_shuffle(vet, vet+N);
	for(int i=0; i<N; i++) {
		t.insert(vet[i]);
	}
	for(int i=1; i<=N; i++) {
		if (t.nth(i) != i) {
			printf("failed test %d\n", i);
		}
	}
	printf("all tests passed\n");
}

int main() {
	test();
	return 0;
}
