#include <iostream>

int main() {
	int num;
	std::cin >> num;
	int new_t, new_x, new_y;
	int old_t = 0, old_x = 0, old_y = 0;
	
	for (int i = 0; i < num; i++) {
		std::cin >> new_t >> new_x >> new_y;
		int time = new_t - old_t;
		int distance = abs(new_x - old_x) + abs(new_y - old_y);
		if (time < distance || (time & 0x1) != (distance & 0x1)){
			std::cout << "No";
			return 0;
		}
		old_t = new_t;
		old_x = new_x;
		old_y = new_y;
	}
	std::cout << "Yes";
	return 0;
}