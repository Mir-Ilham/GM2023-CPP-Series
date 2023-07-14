#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    ll a, b, k;
    cin >> a >> b >> k;
    // Decrement A
    if (a - k < 0) {
        k = k - a;
        a = 0;
    } else {
        a = a - k;
        k = 0;
    }
    // Decrement B
    if (k > 0) {
        if (b - k < 0) {
            b = 0;
        } else {
            b = b - k;
        }
    }
    cout << a << " " << b << endl;
    return 0;
}
