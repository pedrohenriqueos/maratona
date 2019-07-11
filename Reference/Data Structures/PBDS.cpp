#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>,rb_tree_tag,
		tree_order_statistics_node_update> ordered_set;

int32_t main(){
	ordered_set S;
	S.insert(1);
	S.insert(2);
	S.insert(5);
	S.insert(6);
	//      *S.find_by_order(pos)
	cout << *S.find_by_order(1) << '\n'; // 2
	cout << *S.find_by_order(2) << '\n'; // 5
	cout << *S.find_by_order(4) << '\n'; // 0 -> not find
	//              S.find_by_order(size) size do ordered_set
	cout<<((end(S)==S.find_by_order(3))?"TRUE":"FALSE")<<endl;
	//      S.order_of_key(val)
	cout << S.order_of_key(3) << '\n'; // 2
	cout << S.order_of_key(-1) << '\n';// 0
	cout << S.order_of_key(6) << '\n'; // 3
	//retorna val<=*S.find_by_order(S.order_of_key(val))
	cout << *S.find_by_order(S.order_of_key(3)) << '\n';
}
