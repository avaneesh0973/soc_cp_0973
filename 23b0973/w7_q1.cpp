#include<bits/stdc++.h>
#define ll long long
#define PB push_back
using namespace std;
int main(){
        ll n,q,s = 0;
        cin >> n >> q;
        vector<ll> v,a,b,presum;
        for(ll i = 0; i < n; i++){
                ll temp;
                cin >> temp;
                v.PB(temp);
        }
        for(ll i = 0; i < q; i++){
                ll t1,t2;
                cin >> t1 >> t2;
                a.PB(t1);
                b.PB(t2);
        }
        presum.PB(0);
        for(ll i = 0; i < n; i++){
                s += v[i];
                presum.PB(s);
        }
        for(ll i = 0; i < q; i++){
                cout << presum[b[i]] - presum[a[i]-1] << "\n";
        }
}