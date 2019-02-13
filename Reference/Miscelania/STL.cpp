//vector<T>
vector<int> A,B;
A.push_back(x);         A.begin(); 
A.end();                A.assign(N,val);
A.size();               A.pop_back();
A.erase(A.begin()+i);   A.clear();
A.front();              A.back();

//pair<T,T>
pair<int,int> a;
a.first;                a.second; 
a=make_pair(val1,val2); a={val1,val2};

//queue<T>
queue<int> q;
q.empty();              q.size();
q.front();              q.back();
q.push(a);              q.pop();

//priority_queue<T>
priority_queue<T,vector<T>,greater<T> >
priority_queue<int> pq;
pq.empty();             pq.size();
pq.top();               pq.push(a);
pq.pop();

//stack<T>
stack<int> pilha;
pilha.empty();          pilha.size();
pilha.top();            pilha.push(val);
pilha.pop();

//set<T>
set<int> S;
S.begin();              S.end(); 
set<T>::iterator it=S.begin();
S.empty();              S.size();
S.insert(val);          S.clear();
S.erase(val);//ponteiro ou valor
if(S.find(val)!=S.end())
set<int>::iterator it=S.lower_bound(a);//retorna o ponteiro do elemento
set<int>::iterator it=S.upper_bound(b);//retorna o ponteiro do prox elemento
S.erase(S.lower_bound(a),S.upper_bound(b)); // remove[a,b]

//map<T,T>
map<string,int> Map;
Map.begin();            Map.end();
Map.empty();            Map.size();
Map.insert({"str",x});
pair< map<string,int>::iterator,bool> r;
r=Map.insert({"str",x});
if(r.second) x++;
Map.erase("str");//key or iterator or range(it,Map.end())

//deque<T>
deque<int> dq;
dq.size();              dq.empty();
dq.front();             dq.back();
dq.assign(N,val);       dq.push_back(val);
dq.push_front(val);     dq.pop_back();
dq.pop_front();         dq.clear();

//algorithm
lower_bound(v.begin(), v.end(), val);
upper_bound(v.begin(), v.end(), val);
sort(v.begin(), v.end(), cmp);
stable_sort(v.begin(), v.end(),cmp);
partial_sort(v.begin(),v.begin()+x,v.end(),cmp);
merge(first.begin(),first.end(),second.begin(),second.end(),v.begin());
next_permutation(v.begin(),v.end());
