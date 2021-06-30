#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x[3];

    cin >> x[0] >> x[1] >> x[2];

    if (x[0] == x[1] && x[1] == x[2]) {
        cout << x[0] * 1000 + 10000;
    }
    else if (x[0] == x[1]) {
        cout << x[0] * 100 + 1000;
    }
    else if (x[1] == x[2]) {
        cout << x[1] * 100 + 1000;
    }
    else if (x[0] == x[2]) {
        cout << x[0] * 100 + 1000;
    }
    else {
        cout << *max_element(x, x + 3) * 100;
    }

    return 0;
}