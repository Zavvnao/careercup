#include <unordered_map>
#include <iostream>

using namespace std;

bool unique(const string &s) {
	// Depends on if the string is Unicode or ASCII,
	// If ASCII, then this applies.
	if (s.size() > 256) {
		return false;
	}

	unordered_map<char, unsigned short> u;
	for (int i = 0; i < s.size(); i++) {
		if (u[s[i]] == 0) {
			u[s[i]] = 1;
		}
		else {
			return false;
		}
	}

	return true;
}

int main() {
	// Test string
	string s = "";
	bool result = unique(s);
	cout << result << "\n";
    return 0;
}