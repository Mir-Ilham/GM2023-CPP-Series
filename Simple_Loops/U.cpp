#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    char digits[1100];

    while (true) {
        scanf("%s", &digits);
        int sum = 0;
        for (int i = 0; digits[i] != '\0'; i++)
            sum += digits[i] - '0';
        if (sum == 0)
            break;
        else
            cout << sum << endl;
    }

    return 0;
}
