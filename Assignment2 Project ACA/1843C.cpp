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
        ll sum = 0;
        while(n){
            sum+=n;
            n = n/2;
        }
        cout<<sum<<endl;
    }
}
