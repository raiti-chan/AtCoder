#include <iostream>

int main() {
	int val, low, high;
	std::cin >> val >> low >> high;
	
	int value = 0;
	
	for (int i = 1; i <= val; i++) {
		int buf = i;
		int sum = 0;
		while(buf != 0) {
			sum += buf % 10;
			buf /= 10;
		}
		if (low <= sum && sum <= high) {
			value += i;
		}
	}
	
	std::cout << value;
	return 0;
}