int x[MAX_QUANTIDADE_ELEMENTOS][TAMANHO_ALFABETO],id;
inline void build(string &s){
	int root = 0;
	for(int i=0;i < s.size();i++){
		if(x[root][s[i]-'a'] == 0)//s[i]-'A'
			root = x[root][s[i]-'a'] = id ++;
		else
			root = x[root][s[i]-'a'];
	}
	// end string in root
}
