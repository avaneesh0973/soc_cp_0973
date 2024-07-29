#include<bits/stdc++.h>
#define ll long long
#define PB push_back
using namespace std;

ll aot(ll x1,ll y1,ll x2,ll y2,ll x3,ll y3){
        return ((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2)));
}

int main(){
        int n;
        cin >> n;
        vector<ll> x,y;
        for(int i = 0; i < n; i++){
                ll a,b;
                cin >> a >> b;
                x.PB(a);
                y.PB(b);
        }
        ll area = 0;
        for(int i = 1; i < n-1; i++){
                area += aot(x[0],y[0],x[i],y[i],x[i+1],y[i+1]);
        }
        cout << abs(area) << "\n";
}