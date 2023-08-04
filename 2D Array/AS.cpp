#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    int n, m;
    cin >> n >> m;
    int matrix[n][m], vect[m], result[n];
    memset(result, 0, sizeof(result));

    // Taking matrix input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // Taking vector input
    for (int i = 0; i < m; i++)
        cin >> vect[i];

    // Matrix-Vector Multiplication
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            result[i] += matrix[i][j] * vect[j];
        }
    }
    // For each loop
    for (int x : result) {
        cout << x << endl;
    }
    return 0;
}
