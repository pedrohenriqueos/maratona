vector<char> lis(string &str){
	vector<char> pilha,resp;
	int pos[300002],pai[300002];
	for(int i=0;i<str.size();i++){
		vector<char>::iterator it=upper_bound(pilha.begin(),pilha.end(),str[i]);
					//lower_bound -> elementos distintos
		int p=it-pilha.begin();
		if(it==pilha.end())pilha.push_back(str[i]);
		else *it=str[i];
		pos[p]=i;
		if(p==0) pai[i]=-1;
		else pai[i]=pos[p-1];
	}
	int p=pos[pilha.size()-1];
	while(p>=0){
		resp.push_back(str[p]);
		p=pai[p];
	}
	reverse(resp.begin(),resp.end());
	return resp;
}
