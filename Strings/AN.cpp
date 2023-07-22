#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    int arr[3] = {0};
    string vowels = "aeiou";
    for (int i = 0; i < 3; i++) {
        string s;
        getline(cin, s);
        for (int j = 0; j < s.size(); j++) {
            if (vowels.find(s[j]) != -1)
                arr[i]++;
        }
    }
    if (arr[0] == 5 && arr[1] == 7 && arr[2] == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
