#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    int a, b, d, r;
    double f;
    cin >> a >> b;
    d = a / b;
    r = a % b;
    // f = a / b;  /// For input 3, 2 -> a / b = 1 -> then after assignment it is type casted to double
    f = (double)a / b;
    cout << fixed << setprecision(9);
    cout << d << " " << r << " " << f << endl;
    return 0;
}
