#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#define ll long long int

using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k, q;
        cin >> n >> k >> q;
        ll arr[k + 1], brr[k + 1], crr[q];
        arr[0] = 0, brr[0] = 0;
        for (ll i = 1; i <= k; i++) {
            cin >> arr[i];
        }
        for (ll i = 1; i <= k; i++) {
            cin >> brr[i];
        }
        for (ll i = 0; i < q; i++) {
            cin >> crr[i];
            ll ans = 0;
            if (crr[i] < arr[1]) {
                ans = crr[i] * brr[1] / arr[1];
            } else {
                ll left = 1, right = k;
                while (left < right) {
                    ll mid = left + (right - left) / 2;
                    if (crr[i] <= arr[mid]) {
                        right = mid;
                    } else {
                        left = mid + 1;
                    }
                }
                ans = brr[left - 1] + (crr[i] - arr[left - 1]) * (brr[left] - brr[left - 1]) / (arr[left] - arr[left - 1]);
            }
            cout << ans << " ";
        }
        cout << "\n";
    }
    return 0;
}
