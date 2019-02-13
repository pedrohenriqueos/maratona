#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define int long long
long long llrand()
{
	long long tmp = rand();
	return (tmp << 31) | rand();
}
 
long long add(long long a, long long b, long long c)
{
	long long ans = (a + b) % c;
    if(ans < 0) ans += c;
    return ans;
}
 
long long mulmod(long long a, long long b, long long c)
{
	long long ans = 0;
	while(b)
	{
		if(b & 1) ans = add(ans, a, c);
		a = add(a, a, c);
		b /= 2;
	}
	return ans;
}

long long rho(long long n)
{
    if(n % 2 == 0) return 2;
    long long d = n;
    while(d == n)
    {
        long long c = llrand() % n, x = llrand() % n, y = x;
        do
        {
            x = add(mulmod(x, x, n), c, n);
            y = add(mulmod(y, y, n), c, n);
            y = add(mulmod(y, y, n), c, n);
            d = __gcd(abs(x - y), n);
        }while(d == 1);
    }
    return d;
}

long long fexp(long long a, long long b, long long c)
{
	long long ans = 1;
	while(b)
	{
		if(b & 1) ans = mulmod(ans, a, c);
		a = mulmod(a, a, c);
		b /= 2;
	}
	return ans;
}
 
bool miller(long long a, long long n)
{
    if (a >= n) return true;
    long long s = 0, d = n - 1;
    while(d%2 == 0 and d) d >>= 1, s++;
    long long x = fexp(a, d, n);
    if(x == 1 or x == n - 1) return true;
    for(int r = 0; r < s; r++, x = mulmod(x, x, n))
    {
        if (x == 1) return false;
        if (x == n-1) return true;
    }
    return false;
}
 
bool isprime(long long n)
{
    int base[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    for(int i = 0; i < 12; i++)
        if(!miller(base[i], n))
            return false;
    return true;
}
vector<long long> fac;


void factors(long long n) // encontrar os fatores primos de N
{// Usar Miller-Rabin para testar se N é primo
    if(n == 1) return;
    if(isprime(n)){ fac.push_back(n); return; }
    long long d = rho(n);
    factors(d);
    factors(n / d);
}

int phi(int n){
	int res = 1;
	for(int i=0;i<(int)fac.size();i++){
		int x=fac[i],q=1,aux=i+1;
		while(aux<(int)fac.size() and x==fac[aux]){
			aux++;
			q++;
		}
		i=aux-1;
		int fator = x; int exp = q;
		res *= fexp(fator,exp-1,1LL<<33);
		res *= fator-1;
	}
	return res;
}

main(){
	srand(time(0));
	int N;
	while(scanf("%lld",&N)!=EOF){
		fac.clear();
		factors(N);
		printf("%lld\n",phi(N));
	}

}
