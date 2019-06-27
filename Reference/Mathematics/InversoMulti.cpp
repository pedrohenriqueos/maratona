// inv(x) = x^(phi(m)-1) mod m, se x e m são coprimos

int inv(int x, int mod){
	if(__gcd(x,mod)!=1) return -1; //não existe
	int _phi = phi(mod) - 1;
	return fast_expo(x,_phi,mod);
}

// inv(x) = x^(m-2) mod m, se m é primo

int inv(int x,int mod){ 
	return fast_expo(x,m-2,mod);
}


/* Linear */

const int MOD =1e9+7;
int inv[MAXN];
inv[1] = 1;
for ( int i = 2; i < MAXN; i++ ) {
    inv[i] = (-(MOD/i) * inv[MOD%i] ) % MOD;
    inv[i] = inv[i] + MOD;
}
