int N,M,Q,arr[10002];
string str1,str2,str;

void build(){
	int i=0,j=1;
	while(j<M){
		if(str2[i]==str2[j])
			arr[j]= ++i;
		else{
			i=0;
			if(str2[i]==str2[j])
				arr[j]=++i;
		}
		j++;
	}

}
int matching(){
	int i=0,j=0,cont=0;
	while(j<str.size()){
		if(str2[i]==str[j])i++,j++;
		else if(i)i=arr[i-1];
		else j++;
		if(i==M)//matching na posicao return j-M
			cont++;//quantidade de matching's
	}
	return cont;// ou -1, nao encontrado
}
int main(){
	cin >> str1 >> str2;
	build();
	while(Q--){
		int a,b;
		cin >> a >> b;
		str=str1.substr(a-1,(b-a)+1);
		cout << matching() << '\n';
	}
}
