#include <iostream>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    int* c = new int[n];

    for (int i = 0, ai = 1; i < n; i++) {
        cin >> ai;
        c[i] = ai;
    }

    int min = 0;

    for (int i = n - 1; k > 0;) {
        if (k >= c[i]) {
            k -= c[i];
            min++;
        }
        else {
            i--;
        }
    }

    cout << min << endl;
}