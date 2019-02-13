int couting_bits(int N){
	int i;
	for(i=0;N;i++)
		N&=(N-1);
	return i;
}
__builtin_popcount(int N);
__builtin_popcountll(ll N);

//Portas Logicas
and 1 & 1 = 1, 0 & X = 0 
or 1 | X = 1
xor 1 ^ 0 = 1, X ^ X = 0 

Conjunto |=(1<<i);//inserir elemento
& intersecao de dois conjuntos
| uniao de dois conjuntos
