#include <iostream>

int d(int n);

int main() {

	int i, j, k = 0;

	for (i = 1; i <= 10000; i++) {
		for (j = 0; j < i; j++) {
			if (d(j) == i) {
				k = 0;
				break;
			}
			k++;
		}
		if (j == k) { std::cout << k << std::endl; }
		k = 0;
	}

	return 0;
}

int d(int n) {

	int s = 0;

	s += n;

	while (true) {
		if (n < 10) {
			s += n;
			break;
		}
		s += n % 10;
		n /= 10;
	}

	return s;
}