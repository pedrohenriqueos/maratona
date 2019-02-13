#define f first
#define s second
int find(int a){
	return (pai[a]==-1)?a:pai[a]=find(pai[a]);
}
void join(int a,int b){
	pai[find(a)]=find(b);
}
int main(){
	priority_queue<T,vector<T>,greater<T>> pq;
	while(!pq.empty()){
		iii a=pq.top();// iii == pair<int,pair<int,int>>  | T == iii
		pq.pop();
		if(find(a.s.f)!=find(a.s.s)){
			join(a.s.f,a.s.s);
			mst.push_back(a);//minimum spanning tree
		} 

	}
}
