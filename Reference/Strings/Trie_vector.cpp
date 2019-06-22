struct Trie{
	map<char,int> filho;
	int cont;
	Trie(){
		cont=0;
	}

};
vector<Trie> trie;
inline void add(string &adc){
	root=0;
	for(auto &c:adc){
		if(trie[root].filho.count(c)==0){
			trie[root].filho[c] = trie.size();
			trie.push_back(Trie());
		}
		root = trie[root].filho[c];
	}
	trie[root].cont++;
}

inline void init(){
	trie.clear();
	trie.push_back(Trie());
}
