#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    int n, k, m, x, sum = 0;
    cin >> n >> k >> m;
    for (int i = 0; i < n - 1; i++) {
        int y;
        cin >> y;
        sum += y;
    }
    x = (n * m) - sum;
    if (0 < x && x <= k)
        cout << x << endl;
    else if (x < 0)
        cout << 0 << endl;
    else
        cout << -1 << endl;
    return 0;
}
