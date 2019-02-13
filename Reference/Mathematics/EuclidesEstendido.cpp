// a*x + b*y == gcd(a,b)*K

int x,y;
int euclidesEst(int a,int b){
	if(a==0){
		x=0,y=1;
		return b;
	}
	int g = euclidesEst(b%a,a);
	int x1 = x,y1 = y;
	y1 = x;
	x1 = y - (b/a)*x;
	x = x1;
	y = y1;
	return g;
}

