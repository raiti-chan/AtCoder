#include <iostream>

int main() {
	int count, result_10000 = -1, result_5000 = -1, result_1000 = -1;
	int total;
	std::cin >> count >> total;
	for (int c_10000 = 0; c_10000 <= count; c_10000++) {
		for(int c_5000 = 0; c_10000 + c_5000 <= count; c_5000++) {
			int c_1000 = count - c_10000 - c_5000;
			if (c_10000 * 10000 + c_5000 * 5000 + c_1000 * 1000 == total) {
				result_10000 = c_10000;
				result_5000 = c_5000;
				result_1000 = count - c_10000 - c_5000;
			}
		}
	}
	std::cout << result_10000 << " " << result_5000 << " " << result_1000;
	return 0;
}