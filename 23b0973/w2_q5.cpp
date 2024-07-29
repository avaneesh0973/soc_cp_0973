#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
        int n;
        cin >> n;
        vector<ll> v;
        for(int  i = 0; i < n; i++){
                ll temp;
                cin >> temp;
                v.push_back(temp);
        }
        sort(v.begin(),v.end());
        ll median,l = 0;
        if ( n % 2 == 0) median = (v[(n/2) - 1] + v[(n/2)])/2;
        else median = v[((n+1)/2) - 1];
        for(auto x : v){
                l += abs(x - median);  
        }
        cout << l <<"\n";
}