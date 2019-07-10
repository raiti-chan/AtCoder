#include <iostream>

int main() {
	int count;
	char s[4];
	std::cin >> s;
	for(int i = 0; i < 3; i++) {
		count += s[i] == '1' ? 1 : 0;
	}
	
	std::cout << count;
	return 0;
}