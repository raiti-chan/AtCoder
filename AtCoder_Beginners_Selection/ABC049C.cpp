#include <iostream>
#include <string>
#include <algorithm>

std::string elements[4] = {"dream", "dreamer", "erase", "eraser"};
using string = std::string;

int main() {
	string s;
	std::cin >> s;
	
	std::reverse(s.begin(), s.end());
	for (int i = 0; i < 4; i++) {
		std::reverse(elements[i].begin(), elements[i].end());
	}
	
	bool flag_can = true;
	for (int index = 0; index < s.size();) {
		bool flag_can_inner = false;
		for (int i = 0; i < 4; i++) {
			string& target = elements[i];
			if (s.substr(index, target.size()) == target) {
				flag_can_inner = true;
				index += target.size();
				break;
			}
		}
		if (!flag_can_inner) {
			flag_can = false;
			break;
		}
	}
	
	std::cout << (flag_can ? "YES" : "NO");
	
	return 0;
}