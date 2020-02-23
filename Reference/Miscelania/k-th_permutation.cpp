#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>,rb_tree_tag,
		tree_order_statistics_node_update> ordered_set;

string getPermutation(int n, int k) {
    string str(n,'a');
    int fat[n+1];
    ordered_set s;
    fat[0] = fat[1] = 1;
    for(int i=2;i<=n;i++)
        fat[i] = fat[i-1]*i;
    for(int i=1;i<=n;i++)
            s.insert(i);
    for(int i=0,x=n-1;i<n;i++,x--){
        int l=0,r=x+1,ans = 0;
        while(r>=l){
            int mid = (l+r)/2;
            if(mid*fat[x]<k){
                ans = mid;
                l = mid+1;
            }else
                r = mid-1;
        }
        k-=ans*fat[x];
		auto it =s.find_by_order(ans);
        str[i] = (char)(*it+'0');
        s.erase(it);
    }
    return str;
}
