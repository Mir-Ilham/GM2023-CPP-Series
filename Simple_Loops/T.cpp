#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    int n;
    cin >> n;
    int mn = INT_MAX, mx = INT_MIN;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < mn)
            mn = x;
        if (x > mx)
            mx = x;
        sum += x;
    }
    cout << mn << " " << mx << " " << sum << endl;
    return 0;
}
