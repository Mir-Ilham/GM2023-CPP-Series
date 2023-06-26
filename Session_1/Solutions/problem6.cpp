#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    int n, temp, a, b , c, ans;
    cin >> n;
    /// Extract the digits
    temp = n;
    c = temp % 10;
    temp /= 10;
    b = temp % 10;
    a = temp / 10;
    /// Calculate the answer using the formula abc + bca + cab
    ans = n + (b * 100 + c * 10 + a) + (c * 100 + a * 10 + b);
    cout << ans << endl;
    return 0;
}
