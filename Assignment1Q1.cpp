#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<string>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t){
        string s;
        cin>>s;
        ll n = s.length(), ctr1 = 0, ctr2 = 0, ctr = 0;
        if (n==1){
            ctr = 1;
        }
        else{
            for(ll i = 0;i<n-1;i++){
                if (s[i+1]<s[i]){
                    ctr1++;
                }
            }
            for(ll i = 0;i<n-1;i++){
                if (s[i+1]=='1' && s[i]=='0'){
                    ctr2++;
                }
            }
            if (ctr2==0){
                ctr = ctr1+1;
            }
            else {
                ctr = ctr1+ctr2;
            }
        }
        cout<<ctr<<endl;
        t--;
    }
}