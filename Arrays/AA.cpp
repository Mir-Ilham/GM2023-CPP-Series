#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mem(a,b) memset(a, b, sizeof(a))
#define endl '\n'

int main() {
    optimize();
    int n;
    cin >> n;
    // Hashing technique
    int hash[n + 1];
    memset(hash, 0, sizeof(hash));
    for (int i = 0; i < 4 * n - 1; i++) {
        int x;
        cin >> x;
        hash[x]++;
    }
    for (int i = 1; i <= n; i++) {
        if (hash[i] == 3) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}

