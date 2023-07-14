#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    int a, b, c, cnt = 0;
    cin >> a >> b >> c;
    for (int i = a; i <= b; i++) {
        if (c % i == 0)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
