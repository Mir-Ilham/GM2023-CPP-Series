#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    int n;
    cin >> n;
    while (n--) {
       int x;
       cin >> x;
       if (x <= 10) {
            cout << x << " " << 0 << endl;
       } else {
            cout << 10 << " " << x - 10 << endl;
       }
    }
    return 0;
}
