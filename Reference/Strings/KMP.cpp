int arr[10002];
string txt,pattern;

void build(){
	int i=0,j=1;
	while(j<pattern.size()){
		if(pattern[i]==pattern[j])
			arr[j]= ++i;
		else{
			i=0;
			if(pattern[i]==pattern[j])
				arr[j]=++i;
		}
		j++;
	}

}
int matching(){
	int i=0,j=0,cont=0;
	while(j<txt.size()){
		if(pattern[i]==txt[j])i++,j++;
		else if(i)i=arr[i-1];
		else j++;
		if(i==pattern.size())//matching na posicao return j-M
			cont++;//quantidade de matching's 
	}
	return cont;
}

 
int32_t main(){
	cin >> pattern >> txt;
	build();
	cout << matching() << '\n';
}

