#include<bits/stdc++.h>

using namespace std;
#define int long long
vector< pair<int,int> > arr;
int N;
int pd(int A,int B,int id){
	if(id==(N-1)){
		if(A and B)
			return max(arr[id].first*2,arr[id].second);
		else if(B)
			return max(arr[id].second,arr[id].first);
		else
			return arr[id].second;
	}
	if(A and B)
		return max(pd(A-1,B-1,id+1)+arr[id].first*2,max(pd(A,B-1,id+1)+arr[id].first,pd(A,B,id+1)+arr[id].second));
	if(B)
		return max(pd(A,B-1,id+1)+arr[id].first,pd(A,B,id+1)+arr[id].second);
	return pd(A,B,id+1)+arr[id].second;
}
main(){	
	int A,B;
	scanf("%lld %lld %lld",&N,&A,&B);
	arr.assign(N,{0,0});
	for(auto &a:arr) scanf("%lld %lld",&a.first,&a.second);
	int out=pd(A,B,0);
	printf("%lld\n",out);
}
