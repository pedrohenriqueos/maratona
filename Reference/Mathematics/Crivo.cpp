int primos[m+1];//m = valor maximo desejado
void crivo(){
	primos[1]=1;
	for(int i=2;i<=m;i++)
		if(primos[i]==0){
			for(int j=2;i*j<=m;j++)
				primos[i*j]=i;
		}
}
