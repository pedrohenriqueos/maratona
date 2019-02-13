#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
#define f first
#define s second
#define pb push_back
#define all(a) a.begin(),a.end()
#define db(a) cerr << #a << " = " << a << '\n';
#define _ << " , " << 

typedef pair<int,int> ii;
typedef pair<int, ii> iii;

int32_t main(){
	int N;
	cin >> N;
	vector<string> A(2*N-2);
	pair<string,string> w,opc;
	map<string,int> Map;
	vector<int> V;
	w={"-1","-1"};
	opc={"",""};
	V.assign(3*N,-1);
	for(auto &a:A){
		cin >> a;
		if((int)a.size()==(N-1) and w.f=="-1")
			w.f = a;
		else if((int)a.size()==(N-1))
			w.s = a;
	}
	opc.f=w.f;opc.f+=w.s[N-2];
	opc.s+=w.s[0];
	for(auto c:w.f)
		opc.s+=c;
	//cout << N << '\n';
	int cont=0;
	for(int i=0;i<((2*N)-2);i++){
		if(V[2*(int)A[i].size()]==-1)
			Map[A[i]] = 2*(int)A[i].size(),V[2*(int)A[i].size()]=i;
		else
			Map[A[i]] = 2*(int)A[i].size()+1,V[2*(int)A[i].size()+1]=i;
		//cout << A[i] << " " << Map[A[i]] << '\n';
	}
	V.clear();
	V.assign(2*N,-1);
	vector<int> X(2*N-2);
	cont=0;
	for(int i=0;i<(2*N-2);i++){
		//cout << opc.f<< " " << opc.f.substr(N-(int)A[i].size(),(int)A[i].size()) << " " << opc.f.substr(0,(int)A[i].size()) << " | " << A[i] << '\n';
		if(opc.f.substr(0,(int)A[i].size())==A[i] and V[Map[A[i]]]==-1){
			V[Map[A[i]]]=1;
			X[i] = 1;
			//cout << A[i] << " " << Map[A[i]] << '\n';
		}else if(opc.f.substr(N-(int)A[i].size(),(int)A[i].size())==A[i]){
			V[Map[A[i]]]=0;
			X[i]=0;
			//cout << A[i] << " " << Map[A[i]] << '\n';
		}else{
			//cout << V[Map[A[i]]] << '\n';
			break;
		}
		cont++;
	}
	string out="";
	if(cont==(2*N-2)){
		for(int i=0;i<(2*N-2);i++)
			if(X[i]==1)
				out+='P';
			else
				out+='S';
		cout << out << '\n';
		return 0;
	}
	X.clear();
	X.assign(2*N-2,-1);
	V.clear();
	V.assign(2*N,-1);
	for(int i=0;i<(2*N-2);i++){
		if(opc.s.substr(0,(int)A[i].size())==A[i] and V[Map[A[i]]]==-1)
			V[Map[A[i]]]=1,X[i]=1;
		else if(opc.s.substr(N-(int)A[i].size(),(int)A[i].size())==A[i])
			V[Map[A[i]]]=0,X[i]=0;
		else{
			//cout << opc.s.substr(N-(int)A[i].size(),(int)A[i].size()) << " " << N-(int)A[i].size() << '\n';
			break;
		}
	}
	for(int i=0;i<(2*N-2);i++)
			if(X[i]==1)
				out+='P';
			else
				out+='S';
	cout << out << '\n';
}



















