const int Qit = 1e2;
double l=0.0,r=1e7;//search limit
for(int it = 0;it < Qit; it++){
	double m1 = l+(r-l)/3.0;
	double m2 = r-(r-l)/3.0;
	if(f(m1)<f(m2))//<minimum, >maximum
		r=m2;
	else l=m1;
}
double ans = f(l);
//derivative
int l=0,r=1e7;//search limit
while(r-l>1){
	int m = (l+r)/2;
	if(f(m)<f(m+1))//<minimum, >maximum
		r=m;
	else l=m;
}
int ans = f(r);
