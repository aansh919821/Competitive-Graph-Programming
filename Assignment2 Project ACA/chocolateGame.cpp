#include<bits/stdc++.h>
using namespace std;
vector<int> solution (int N, vector<int> C) {
    stack<int>s;
    vector<int>v;
    for(int i = 0; i<C.size(); i++){
        if (C[i]>0){
            s.push(C[i]);
        }
        else if (C[i] == 0){
            int x = s.top();
            s.pop();
            v.push_back(x);
        }
    }
    return v;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> C(N);
    for(int i_C = 0; i_C < N; i_C++)
    {
    	cin >> C[i_C];
    }

    vector<int> out_;
    out_ = solution(N, C);
    cout << out_[0];
    for(int i_out_ = 1; i_out_ < out_.size(); i_out_++)
    {
    	cout << " " << out_[i_out_];
    }
}
