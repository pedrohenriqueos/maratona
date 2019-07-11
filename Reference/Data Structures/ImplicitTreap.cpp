#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
struct node {
	int y, v, query, size;
	bool rev;
	node *l, *r;
	node(int _v) : v(_v), query(_v), y(rng()),
		size(1), l(NULL), r(NULL), rev(false) {}	
};
/*
Para swap de string O(log N), substituir int v, por char v
Não possui query. Inserir os char's da string na treap
*/
class ImplicitTreap {
private:
	node* root;
	int size(node* t) { return t ? t->size : 0; }
	int query(node* t) { return t ? t->query : 0; }
	node* refresh(node* t) {
		if (t == NULL) return t;
		t->size = 1 + size(t->l) + size(t->r);
		t->query = t->v + query(t->l) + query(t->r);
		if (t->l != NULL) t->l->rev ^= t->rev;
		if (t->r != NULL) t->r->rev ^= t->rev;
		if (t->rev) {
			swap(t->l, t->r);
			t->rev = false;
		}
		return t;
	}
	void split(node* &t, int k, node* &a, node* &b) {
		refresh(t);
		node * aux;
		if (!t) a = b = NULL;
		else if (size(t->l) < k) {
			split(t->r, k-size(t->l)-1, aux, b);
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
		refresh(a); refresh(b);
		node* aux;
		if (!a or !b) return a ? a : b;
		if (a->y < b->y) {
			a->r = merge(a->r, b);
			return refresh(a);
		}
		else {
			b->l = merge(a, b->l);
			return refresh(b);
		}
	}
	node* at(node* t, int n) {
		if (!t) return t;
		refresh(t);
		if (n < size(t->l)) return at(t->l, n);
		else if (n == size(t->l)) return t;
		else return at(t->r, n-size(t->l)-1);
	}
	void del(node* &t) {
		if (!t) return;
		if (t->l) del(t->l);
		if (t->r) del(t->r);
		delete t;
		t = NULL;
	}
public:
	ImplicitTreap() : root(NULL) { }
	~ImplicitTreap() { clear(); }
	void clear() { del(root); }
	int size() { return size(root); }
	bool insertAt(int n, int v) {
		node *a, *b;
		split(root, n, a, b);
		root = merge(merge(a, new node(v)), b);
		return true;
	}
	bool erase(int n) {
		node *a, *b, *c, *d;
		split(root, n, a, b);
		split(b, 1, c, d);
		root = merge(a, d);
		if (c == NULL) return false;
		delete c;
		return true;
	}
	int at(int n) {
		node* ans = at(root, n);
		return ans ? ans->v : -1;
	}
	int query(int l, int r) {
		if (l > r) swap(l, r);
		node *a, *b, *c, *d;
		split(root, l, a, d);
		split(d, r-l+1, b, c);
		int ans = query(b);
		root = merge(a, merge(b, c));
		return ans;
	}
	void reverse(int l, int r) {
		if (l>r) swap(l, r);
		node *a, *b, *c, *d;
		split(root, l, a, d);
		split(d, r-l+1, b, c);
		if (b != NULL) b->rev ^= 1;
		root = merge(a, merge(b, c));
	}
};

bool test() {
	vector<int> v;
	ImplicitTreap t;
	int N = 10000;
	vector<int>::iterator it;
	bool toprint = false;
	for(int i=0, n, k, l, r; i<N; i++) {
		if (i%5 == 0 && i > 0) {
			n = rng()%((int)v.size());
			if (toprint) printf("deleting v[%d] = %d\n", n, v[n]);
			it = v.begin()+n;
			v.erase(it);
			t.erase(n);
		}
		else if (i%5 == 4) {
			l = rng()%((int)v.size());
			r = rng()%((int)v.size());
			if (l>r) swap(l, r);
			if (toprint) printf("reversing %d to %d\n", l, r);
			for(int j=l; j<=r && j<=r-j+l; j++) {
				swap(v[j], v[r-j+l]);
			}
			t.reverse(l, r);
		}
		else{
			n = rng()%((int)v.size()+1);
			k = rng()%1000;
			if (toprint) printf("inserting %d in pos %d\n", k, n);
			it = v.begin()+n;
			v.insert(it, k);
			t.insertAt(n, k);
		}
		if (toprint) printf("array: ");
		for(int j=0; j<(int)v.size(); j++) {
			if (toprint) printf("%d ", v[j]);
			if (v[j] != t.at(j)) {
				printf("test %d failed, v[%d] = %d, t.at(%d) = %d\n", i+1, j, v[j], j, t.at(j));
				return false;
			}
		}
		if (toprint) printf("\n");
		l = rng()%((int)v.size());
		r = rng()%((int)v.size());
		if (l>r) swap(l, r);
		int ans = 0;
		for(int j=l; j<=r; j++) {
			ans += v[j];
		}
		if (toprint) printf("query(%d, %d) = %d = %d\n", l, r, ans, t.query(l, r));
		if (ans != t.query(l, r)) {
			printf("test %d failed, ans(%d, %d) = %d = %d\n", i, l, r, ans, t.query(l, r));
			return false;
		}
	}
	return true;
}

int main() {
	if(test()) printf("all tests passed\n");
	return 0;
}
