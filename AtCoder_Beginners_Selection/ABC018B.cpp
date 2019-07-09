#include <iostream>

int main() {
	int num;
	std::cin >> num;
	int result = 512;
	for(int i = 0; i < num; i++) {
		int input ,val, count = 0;
		std::cin >> input;
		val = ~input + 1;
		val = val & input;
		while(val != 1) {
			val = val >> 1;
			count++;
		}
		result = count < result ? count : result;
		if (result == 0) break;
	}
	
	std::cout << result;
	
	
	return 0;
}