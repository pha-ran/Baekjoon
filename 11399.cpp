#include <iostream>

int main() {

	int n = 0, m = 0, mi = 0, i, j;
	int* p;
	long long sum = 0;

	std::cin >> n;

	p = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		std::cin >> p[i];
	}

	for (i = 0; i < n; i++) {
		m = p[i];
		mi = i;
		for (j = i; j < n; j++) {
			if (m > p[j]) {
				m = p[j];
				mi = j;
			}
		}
		p[mi] = p[i];
		p[i] = m;
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			sum += p[j];
		}
	}

	std::cout << sum << std::endl;

	free(p);

	return 0;
}
