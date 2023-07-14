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
        int k, cnt = 1, i = 1, cur_val = -1;
        cin >> k;
        while (cnt <= k) {
            if (!(i % 3 == 0 || (i % 10 == 3))) {
                cnt++;
                cur_val = i;
            }
            i++;
        }
        cout << cur_val << endl;
    }

    return 0;
}
