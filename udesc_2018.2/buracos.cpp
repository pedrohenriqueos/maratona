#include<bits/stdc++.h>
using namespace std;
int T,N,B,Q,cas,m;
struct _ele{
	double x,y,z;
	string n;
};
typedef struct _ele ele;
vector<pair<double,int> > G[200];
double dist[200];
double dijkstra(int v,int z){
	for(int i=0;i<(m+1);i++)
		dist[i]=(1LL<<62);
	dist[v]=0.0;
	priority_queue< pair<double,int> > pq;
	pq.push({0.0,v});
	while(!pq.empty()){
		int u=pq.top().second;
		double d=-pq.top().first;
		pq.pop();
		if(d>dist[u]) continue;
		if(u==z) return d;
		for(pair<double,int> j:G[u]){
			int w=j.second;
			double _d=j.first;
			if(dist[w]>d+_d){
				dist[w]=d+_d;
				pq.push({-dist[w],w});
			}
		}
	}
	return dist[z];
}
int main(){
	cin >> T;
	while(T--){
		map< pair<int ,int >,int > C;
		map<string,int> Map;
		m=0;
		cin >> N;
		vector<ele> A(N);
		for(auto &a:A){
			cin >> a.n >> a.x >> a.y >> a.z;
			Map[a.n]=m++;
		}
		cin >> B;
		for(int b=0;b<B;b++){
			string str1,str2;
			cin >> str1 >> str2;
			G[Map[str1]].push_back({0,Map[str2]});
			C[{Map[str1],Map[str2]}]=1;
		}
		for(int i=0;i<N;i++)
			for(int j=i+1;j<N;j++){
				double dist=sqrt((A[i].x-A[j].x)*(A[i].x-A[j].x)+(A[i].y-A[j].y)*(A[i].y-A[j].y)+(A[i].z-A[j].z)*(A[i].z-A[j].z));
				if(!C[{Map[A[i].n],Map[A[j].n]}]){
					C[{Map[A[i].n],Map[A[j].n]}]=1;
					G[Map[A[i].n]].push_back({dist,Map[A[j].n]});
				}
				if(!C[{Map[A[j].n],Map[A[i].n]}])
					G[Map[A[j].n]].push_back({dist,Map[A[i].n]}),C[{Map[A[j].n],Map[A[i].n]}]=1;
			}
		cin >> Q;
		cout << "Caso "<< ++cas << ":\n";
		while(Q--){
			string str1,str2;
			cin >> str1 >> str2;
			double out =dijkstra(Map[str1],Map[str2]);
			long long saida;
			if((out-floor(out))>=0.5)
				saida=ceil(out);
			else saida= floor(out);
			cout << "A distancia de " << str1 << " para "<< str2 << " eh " << saida << " parsecs.\n";
		}
		for(int i=0;i<m;i++)
			G[i].clear();
	}

}
