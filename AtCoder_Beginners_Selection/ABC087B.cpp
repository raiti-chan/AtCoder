#include <iostream>

int main() {
	int coin_50, coin_100, coin_500, value;
	std::cin >> coin_500 >> coin_100 >> coin_50 >> value;
	int count = 0;
	for (int i = 0; i <= coin_50; i++) {
		for (int j = 0; j <= coin_100; j++) {
			for (int k = 0; k <= coin_500; k++) {
				i * 50  + j * 100 + k * 500 == value ? ++count : 0;
			}
		}
	}
	std::cout << count;
	return 0;
}