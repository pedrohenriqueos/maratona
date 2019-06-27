const int MAXN = 1e6+1;
void crivophi(){ //todos os phi no crivo
	for(int i=1;i<MAXN;i++)
		phi[i] = i;
	for(int i=2;i<MAXN;i++){
		if(phi[i] == i)
			for(int j = i;j <MAXN;j += i) {
				phi[j] /= i;
				phi[j] *= i - 1;
			}
	}
}

int phi(int n){ //o valor de apenas 1
	auto f = fatorar(n);
	int res = 1;
	for(auto x: f){
		int fator = x.first;
		int exp = x.second;
		res *= fast_expo(fator,exp-1);
		res *= fator-1;
	}
	return res;
}
