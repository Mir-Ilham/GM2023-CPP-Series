#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

// n -> number of test cases
// a, b -> two integers in each line
// Output the sum of a & b

// Sample input
// 3
// 2 1
// 3 4
// 5 7

// Sample output
// 3
// 7
// 12

int main() {
    optimize();
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}
