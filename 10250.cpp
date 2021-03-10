#include <iostream>

int main() {

	int t, h, w, n;

	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> h >> w >> n;

		int x = (n / h);
		int y = n % h * 100;
		if (y == 0) { y = h * 100; }
		else { x++; }

		std::cout << x + y << std::endl;
	}

	return 0;
}