#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n[20], a, b;

    for (int i = 0; i < 20; i++)
        n[i] = i + 1;

    for (int i = 0; i < 10; i++) {
        cin >> a >> b;
        reverse(n + a - 1, n + b);
    }

    for (int i = 0; i < 20; i++)
        cout << n[i] << " ";
}