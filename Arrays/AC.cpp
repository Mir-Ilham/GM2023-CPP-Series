#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    int n, s[14], h[14], c[14], d[14];
    memset(s, 0, sizeof(s));
    memset(h, 0, sizeof(h));
    memset(c, 0, sizeof(c));
    memset(d, 0, sizeof(d));
    cin >> n;
    // The following loop executes the hashing logic
    for (int i = 0; i < n; i++) {
        char x;
        int rnk;
        cin >> x >> rnk;
        if (x == 'S')
            s[rnk] = 1;
        else if (x == 'H')
            h[rnk] = 1;
        else if (x == 'C')
            c[rnk] = 1;
        else
            d[rnk] = 1;
    }
    for (int i = 1; i <= 13; i++) {
        if (s[i] == 0)
            cout << "S " << i << endl;
    }
    for (int i = 1; i <= 13; i++) {
        if (h[i] == 0)
            cout << "H " << i << endl;
    }
    for (int i = 1; i <= 13; i++) {
        if (c[i] == 0)
            cout << "C " << i << endl;
    }
    for (int i = 1; i <= 13; i++) {
        if (d[i] == 0)
            cout << "D " << i << endl;
    }
    return 0;
}
