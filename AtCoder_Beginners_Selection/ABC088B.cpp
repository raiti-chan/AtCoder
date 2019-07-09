#include <iostream>
#include <algorithm>

int main() {
	int size;
	int nums[100] = {0};
	
	std::cin >> size;
	for (int i = 0; i < size; i++) {
		std::cin >> nums[i];
	}
	
	std::sort(nums, nums + size, std::greater<int>());
	
	int alice = 0, bob = 0;
	bool swich = true;
	for (int i = 0; i < size; i++) {
		(swich ? alice : bob) += nums[i] , swich = !swich;
	}
	std::cout << alice - bob;
	
	return 0;
}