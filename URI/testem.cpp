#include<bits/stdc++.h>
using namespace std;


struct _p{
	int a,b;
};
typedef pair<int,pair<int,int> > p;
map<p,int> Map;
pair< map<p,int>::iterator,bool > r;
int main(){
	p c;
	c.a=1;
	c.b=3;
	Map[c]=1;
}
