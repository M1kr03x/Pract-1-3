#include <iostream>
#include <vector> 
class haha {
public:
std::string MessageText;
double price = 1.5;
void adun(std::string b) {
	MessageText = b;
	if (b.length() <= 65) {
		price = 1.5;
	}
	if (b.length() > 65 and b.length() < 250) {
		for (int i = b.length(); i > 65; i--) {
			price = price + 0.5;
		}
	}
	if (b.length() > 250) {
		MessageText.erase(250);
		for (int i = MessageText.length(); i > 65; i--) {
			price = price + 0.5;
		}
	}
}
};
int main() {
	haha chel;
	chel.adun("chezhdasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasaschezhdasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasashggchezhdasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasashggchezhdasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasashggchezhdasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasashggchezhdasasasasasasasasasasachezhdasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasashggsasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasashggchezhdasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasashggchezhdasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasashggchezhdasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasashggchezhdasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasashggchezhdasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasasashggasasasasasasasasasasasasasasasasasasasasasasasasasasasasashggh");
	std::cout << chel.price << std::endl;
	std::cout << chel.MessageText.length();
	return 0;
}