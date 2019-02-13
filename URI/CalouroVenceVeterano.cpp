#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi 3.14159265358979323846264338327950288
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define FORI(i,a,n) for(int i=a;i>=n;i--)
#define REP(i,n) FOR(i,0,n)
#define all(a) a.begin(),a.end()

typedef long long ll;
typedef unsigned long long  ull;
typedef vector<int> vi;
typedef vector< ll > vll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< iii > viii;

int T;

int merge(int A[],int p,int q,int r){
	int B[r+2],i,j,c;
	for(i=p;i<=q;i++)
		B[i]=A[i];
	for(j=q+1;j<=r;j++)
		B[r+q+1-j]=A[j];
	i=p,j=r,c=0;
	for(int k=p;k<=r;k++){
		if(B[i]<=B[j]){
			A[k]=B[i];
			i++;
		}else{
			A[k]=B[j];
			j--;
			c=c+(q-i+1);
		}
	}
	return c;
}

int mergeSort(int A[],int p,int r){
	if(p>=r)
		return 0;
	int q = (p+r)/2;
	int c = mergeSort(A,p,q)+mergeSort(A,q+1,r)+merge(A,p,q,r);
	return c;
}

int main(){
	cin >> T;
	int A[T],t=0;
	while(T--){
		string str,s1="";
		cin >> str;
		bool flag=true;
		REP(i,str.size())
			if(str[i]=='/'){
				flag=false;
				REP(j,i)
					s1+=str[j];
				break;
			}
		if(flag)
			REP(j,str.size())
				s1+=str[j];
		int a = stoi(s1,nullptr,0);
		A[t++]=a;
	}
	cout << mergeSort(A,0,t-1) << '\n';
}
