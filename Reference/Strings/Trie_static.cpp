int x[MAX_QUANTIDADE_ELEMENTOS][TAMANHO_ALFABETO]
inline void build(string &s){
	int i = 0, v = 0;
	for(int i=0;i < s.size();i++){
		if(x[v][s[i]-'a'] == 0)//s[i]-'A'
			v = x[v][s[i]-'a'] = id ++;
		else
			v = x[v][s[i]-'a'];
	}
	// end string in v
}
