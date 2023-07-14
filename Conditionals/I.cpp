#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
