/// TIP /// inv(x) = x^(m-2) mod m ??? if m is prime and x<m
#define var int
#define f first
#define s second
var phi(var n){
	auto f = fatorar(n);
	var res = 1;
	for(auto x: f){
		var fator = x.f; var exp = x.s;
		res *= fast_expo(fator,exp-1);
		res *= fator-1;
	}
	return res;
}
var inv(var x, var mod){
	if(__gcd(x,mod)!=1) return -1;
	var _phi = phi(mod) - 1;
	return fast_expo(x,_phi,mod);
}
