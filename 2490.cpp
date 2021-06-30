#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s[] = { "D", "C", "B", "A", "E" };

    int x, sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> x;
            sum += x;
        }

        cout << s[sum] << "\n";

        sum = 0;
    }

    return 0;
}