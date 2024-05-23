#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#define ll long long int 
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t){
        ll n,k;
        cin>>n>>k;
        if (n==1){
            cout<<k<<endl;
        }
        else if (n==k || k==1){
            cout<<1<<endl;
        }
        else if (n>k){
            {
                if (n%k == 0){
                    cout<<1<<endl;
                }
                else{
                    cout<<2<<endl;
                }
            }
            
        }
        else if (n<k){
            if (k%n == 0){
                int s = k/n;
                cout<<s<<endl;
            }
            else{
                int s = k/n +1;
                cout<<s<<endl;
            }
            
        }
        t--;
    }
}
