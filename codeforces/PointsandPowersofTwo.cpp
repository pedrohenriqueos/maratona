#include<bits/stdc++.h>

using namespace std;
#define int long long
#define inf 0x3f3f3f3f
int V[200001];
map<int,int> Map;
int rec(vector<int> &A,int val,int id,int pot,vector<int> &resp){
	vector<int>::iterator it=find(A.begin()+id,A.end(),(1<<pot)+val);
	if(it!=A.end()){
		resp.push_back(*it);
		for(int i=0;i<(resp.size()-1);i++){
			bool flag=false;
			for(int j=pot;j<31;j++)
				if((resp[resp.size()-1]-resp[i])==(1LL<<j)){
					flag=true;
					break;
				}
			if(!flag)
				return -inf;
		}
				
		return rec(A,*it,Map[*it],pot,resp)+1;
	}
	return 0;
}
main(){
	int N;
	cin >> N;
	vector<int> A(N);
	int x=0;
	for(auto &a:A){
		cin >> a;
		Map.insert({a,x++});
	}
	sort(A.begin(),A.end());
	vector<int> aux;
	pair<int,vector<int> > out={0,aux};
	for(int i=0;i<A.size();i++){
		for(int j=0;j<31;j++){
			vector<int>::iterator it=find(A.begin()+i,A.end(),(1LL<<j)+A[i]);
			if(it!=A.end()){
				vector<int> resp;
				resp.push_back(A[i]);
				resp.push_back(*it);
				int quant=rec(A,*it,Map[*it],j,resp)+2;
				if(out.first<quant)
					out={quant,resp};	
			}
		}
		if(out.second.size() and A[A.size()-1]==out.second[out.second.size()-1]) break;
	}
	if(out.first==0){
		cout << "1\n" << A[0] << '\n';
		return 0;
	}
	cout << out.first << '\n';
	for(int i=0;i<out.first;i++)
		cout << out.second[i] << " ";
	cout << '\n';
}
