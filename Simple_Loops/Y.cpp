#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    int n, k, m, x, sum = 0;
    cin >> n >> k >> m;
    for (int i = 1; i < n; i++) {
        int y;
        cin >> y;
        sum += y;
    }
    x = m * n - sum;
    if (x < 0)
        cout << 0 << endl;
    else if (x > k)
        cout << -1 << endl;
    else
        cout << x << endl;
    return 0;
}
