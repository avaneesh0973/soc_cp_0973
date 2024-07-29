#include<iostream>
#include<vector>
#define ll long long
#define PB push_back
using namespace std;

string pop(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3){
        ll s = (y2 - y1)*(x3 -x1);
        ll m = (y3 - y1)*(x2 - x1);
        if(s == m) return "TOUCH";
        else if(s > m) return "RIGHT";
        else return "LEFT";
}

int main(){
        int t;
        cin >> t;
        vector<ll> x1,y1,x2,y2,x3,y3;
        for(int i = 0; i < t; i++){
                ll a,b,c,d,e,f;
                cin >> a >> b >> c >> d >> e >> f;
                x1.PB(a);
                y1.PB(b);
                x2.PB(c);
                y2.PB(d);
                x3.PB(e);
                y3.PB(f);
        }
        for(int i = 0; i < t; i++){
                cout << pop(x1[i],y1[i],x2[i],y2[i],x3[i],y3[i]) << "\n";
        }
}