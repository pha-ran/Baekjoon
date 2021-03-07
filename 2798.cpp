#include <iostream>

int main() {

	int n, m, max = 0;
	int* num;

	std::cin >> n >> m;

	num = new int[n];

	for (int i = 0; i < n; i++) {
		std::cin >> num[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (i == j || j == k || i == k) { continue; }
				int l = num[i] + num[j] + num[k];
				if (l > max && l <= m) { max = l; }
			}
		}
	}

	std::cout << max << std::endl;

	delete[] num;

	return 0;
}