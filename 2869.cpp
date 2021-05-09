#include <iostream>

int main() {

	int a, b, v, d;

	std::cin >> a >> b >> v;

	d = (v - b) / (a - b);

	if ((v - b) % (a - b) != 0) { d++; }

	std::cout << d << std::endl;

	return 0;
}