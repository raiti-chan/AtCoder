#include <iostream>
#include <set>

int main() {
	int count;
	std::cin >> count;
	
	std::set<int> elements;
	
	for (int i = 0; i < count; i++) {
		int val;
		std::cin >> val;
		elements.insert(val);
	}
	
	std::cout << elements.size();
	
	return 0;
}