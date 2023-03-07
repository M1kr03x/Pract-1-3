
#include <iostream>
#include <windows.h>
#include <string>





class test2 {
private:
	int n = 0;
	int a;
	int number;
public:
	bool SetNumber(int number) {
		
		if (number == n + 1) {

			n = number;
			a = number;

			
			return 1;
		}
		else { 
			a = n + 1;
			n = 0;
			
			return 0; }
	}

	int PredictNumber() {
		
		std::cout << "Ожидаемое значение: ";
		return a;

	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	test2 chelik;
	
	std::cout << std::boolalpha << chelik.SetNumber(1) << "\t";
	std::cout << chelik.PredictNumber() << std::endl;;
	std::cout << std::boolalpha << chelik.SetNumber(2) << "\t";
	std::cout << chelik.PredictNumber() << std::endl;;
	std::cout << std::boolalpha << chelik.SetNumber(3) << "\t";
	std::cout << chelik.PredictNumber() << std::endl;
	std::cout << std::boolalpha << chelik.SetNumber(5) << "\t";
	std::cout << chelik.PredictNumber() << std::endl;
	std::cout << std::boolalpha << chelik.SetNumber(1) << "\t";
	std::cout << chelik.PredictNumber() << std::endl;
	std::cout << std::boolalpha << chelik.SetNumber(2) << "\t";
	std::cout << chelik.PredictNumber() << std::endl;

	
	
};
