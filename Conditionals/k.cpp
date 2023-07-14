#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    int w;
    cin >> w;
    if (w % 2 == 0 && w != 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
