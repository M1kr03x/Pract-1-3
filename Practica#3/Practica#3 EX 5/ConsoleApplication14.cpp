#include <iostream>
#include <vector> 
#include <string>
class haha {
public:
	std::string MessageText;
	int lennn;
	int comm;
	
double price = 1.5;
void adun(std::string b, double p, int l, double c) {
	comm = c;
	price = p;
	lennn = l;
	MessageText = b;
	if (b.length() <= 65) {
		price = p;
	}
	if (b.length() > 65 and b.length() < l) {
		for (int i = b.length(); i > 65; i--) {
			price = price + p;
		}
	}
	if (b.length() > l) {
		MessageText.erase(l);
		for (int i = MessageText.length(); i > 65; i--) {
			price = price + c;
		}
	}
}
};
int main() {
	haha chel;
	chel.adun("casaasasasasasasasasasasasasasasasashggsasasasasasashggh", 1.8, 260, 0.2);
	std::cout << chel.price << std::endl;
	std::cout << chel.MessageText.length();
	return 0;
}