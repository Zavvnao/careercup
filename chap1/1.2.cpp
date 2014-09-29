#include <string>
#include <cstring>
#include <iostream>
#include <array>

using namespace std;

void reverse(char* str) {
	char* end = str;
	char temp;
	if (str) {
		while (*end) {
			end++;
		}
		while (str < end) {
			temp = *str;
			*str = *end;
			*end = temp;
			str++;
			end--;
		}
	}
}

int main() {
	// Test string
	char str[] = "sfsdf";
	reverse(str);
	string a(str, str+6);
	cout << a << "\n";
    return 0;
}