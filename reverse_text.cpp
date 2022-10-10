#include <iostream>
void reverseText(std::string text) {
	std::string reversed_text = "";
	for(int i = text.length; i > 0; i--) {
		reversed_text =+ text[i];
	}
	return reversed_text
}
int main() {
	reverseText("hi");
}
