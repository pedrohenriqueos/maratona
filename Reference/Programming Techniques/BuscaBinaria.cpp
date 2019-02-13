binary_search(B.begin()+i,B.end(),B[i]+(s/3))
//            inicio      fim      valor
int i=0,j=N-1,meio=-1;
while(i<=j){
	meio=(i+j)/2;
	if(C[meio]==b) break;
	if(C[meio]>b) j=meio-1;
	else i=meio+1;                 
}

const double EPS =1e-9;
double l=0,r=1e9;
while(fabs(r-l)>EPS){
	double mid = (l+r)/2.0;
	if(check(mid)){
		r=mid;
		ans=mid;
	}else
		l=mid;
}

