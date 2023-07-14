#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    int t, h, m, s;
    cin >> t;
    h = t / 3600;
    t = t - (h * 3600);
    m = t / 60;
    s = t % 60;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}
