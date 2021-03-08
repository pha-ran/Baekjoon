#include <iostream>

int d(int n);

int main() {

	int n, s = 0;

	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		if (d(i) == 1) { s++; }
	}

	std::cout << s << std::endl;

	return 0;
}

int d(int n) {
	if (n < 100) { return 1; }
	if (n == 1000) { return 0; }

	int a, b, c;

	a = n / 100;
	b = (n / 10) % 10;
	c = n % 10;

	if ((a - b) == (b - c)) { return 1; }
	else { return 0; }
}
