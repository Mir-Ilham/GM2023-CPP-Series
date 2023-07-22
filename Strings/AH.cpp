#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        int uc[26] = {0};
        int lc[26] = {0};
        int cnt = 0;
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < a.size(); i++) {
            if (isupper(a[i])) {
                if (!(uc[a[i] - 'A'])) {
                    uc[a[i] - 'A'] = 1;
                    for (int j = 0; j < b.size(); j++) {
                        if (b[j] == a[i])
                            cnt++;
                    }
                }
            } else {
                if (!(lc[a[i] - 'a'])) {
                    lc[a[i] - 'a'] = 1;
                    for (int j = 0; j < b.size(); j++) {
                        if (b[j] == a[i])
                            cnt++;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
