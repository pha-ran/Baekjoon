#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x[3];

    cin >> x[0] >> x[1] >> x[2];

    sort(x, x + 3);

    for (int i = 0; i < 3; i++) {
        cout << x[i] << " ";
    }

    return 0;
}