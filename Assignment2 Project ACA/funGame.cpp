#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n); // Initialize the vector with size n
    vector<int> v;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }    

    int l = 0, r = n - 1;
    while(l <n && r>=0) {
        if(arr[l] > arr[r]) {
            v.push_back(1);
            r--;
        }
        else if (arr[l] == arr[r]) {
            v.push_back(0);
            l++;
            r--;
        }
        else {
            v.push_back(2);
            l++;
        }
    }

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
