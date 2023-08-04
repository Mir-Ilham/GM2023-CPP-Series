#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

void sort(int arr[], int n) {
    // The purpose of writing a function is to increase code re-usability
    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void incrementUsingReference(int &x) {
    x++;
    cout << "a in function = " << x << endl;
}

void increment(int x) {
    x++;
    cout << "b in function = " << x << endl;
}

int main() {
    optimize();
    int a = 10;
    int b = 12;
    incrementUsingReference(a);
    increment(b);
    cout << "a in main = " << a << endl;
    cout << "b in main = " << b << endl;
    return 0;
}
