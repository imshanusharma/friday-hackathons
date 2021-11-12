// CODEFORCES 1520D (Same Differences)
// Created by ujjwal on 12-11-2021

#include <iostream>
#include <unordered_map>
typedef long long int ll;

using namespace std;

int main() {
    int test_cases;
    cin>>test_cases;

    while(test_cases-- >0) {
        ll n;
        cin>>n;

        int a[n];
        unordered_map<ll,ll> map;
        ll ans = 0;
        for(ll i = 0; i < n; i++) {
            cin>>a[i];
            map[a[i]-(i+1)]++;
        }
        for(auto x: map) {
            ll temp = x.second;
            ans += (temp*(temp-1))/2;
        }
        cout << ans << "\n";
    }
    return 0;
}
