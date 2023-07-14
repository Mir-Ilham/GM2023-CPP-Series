#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    int x, cnt = 1;
    while (1) {
        cin >> x;
        if (x == 0)
            break;
        cout << "Case " << cnt << ": " << x << endl;
        cnt++;
    }
    return 0;
}
