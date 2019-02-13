#define vi vector<int>
#define inf 0x3f3f3f3f
#define pb push_back
#define FOR(i,a,N) for(int i=a;i<N;i++)
#define REP(i,N) FOR(i,0,N)

int MergeSort(vi &A){
	if(A.size()<=1) return 0;
	vi B,C;
	REP(i,A.size()/2)
		B.pb(A[i]);
	FOR(i,A.size()/2,A.size())
		C.pb(A[i]);
	int ans=MergeSort(B)+MergeSort(C);
	B.pb(inf);
	C.pb(inf);
	int b=0,c=0;
	REP(i,A.size()){
		if(C[c]<B[b]){ 
			A[i]=C[c++];
			ans+=B.size()-b-1;
		}else 
			A[i]=B[b++]; 
	}
	return ans; 
}
