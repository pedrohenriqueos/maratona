int vet[max];
int frec[max];//vetor da frequencia dos elementos
void CoutingSort(){
	for(int i=0,c=0; i<max; i++)
		while(frec[i])
			vet[c++]=i,frec[i]--;//coloca o valor no local certo
}
