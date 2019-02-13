v[0]=1;
for(auto valor:Valores)
	FORI(int i=valor_MAX-valor;i>=0;i--)
		if(v[i]) 
			v[i+valor]++;
