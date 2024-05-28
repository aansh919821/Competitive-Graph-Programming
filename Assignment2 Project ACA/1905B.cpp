#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        map<ll,ll>mpp;
        for(ll i= 0; i<n-1; i++){
            ll m ,n;
            cin>>m>>n;
            mpp[m]++;
            mpp[n]++;
        }
        ll ctr = 0;
        for(auto it : mpp){
            if (it.second == 1){
                ctr++;
            }
        }
        cout<<(ctr+1)/2<<endl;
        
    }
}
