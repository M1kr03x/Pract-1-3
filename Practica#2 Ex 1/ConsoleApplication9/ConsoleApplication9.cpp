#include <string>
#include <Windows.h>
#include <iostream>
#include <fstream>

class test {
private:
    double first;
    double second;
    double third;
    double discr;
public:
    test(double a, double b, double c) {
        first = a;
        second = b;
        third = c;
    }
private:double dis(double d) {
    
    d = (second * second) - 4 * first * third;
    discr = d;
    std::cout << "Дискриминант равен: " << discr;
    return d;
}
public:double CalculateRoots(double x1, double x2) {
    this->discr = dis(discr);
    if (discr == 0){
        x1 = ( - second) / (2 * first);
        std::cout << std::endl << "Корень равен:" << "x1 = " << x1 << std::endl;
    }
    if  (discr < 0) {

        std::cout << std::endl << "Корней нет" << std::endl;

    }
    else {
        x1 = (-(second)+std::sqrt(discr)) / 2 * first;
        x2 = (-(second)-std::sqrt(discr)) / 2 * first;
        std::cout << std::endl << "Корни равны:" << "x1 = " << x1 << "\t" << "x2 = " << x2 << std::endl;

        return x1, x2;
    }
    
}
      
public:double GetDiscr(){
    this->discr = dis(discr);
    return discr;
}
    };
    int main()
    {
        setlocale(LC_ALL, "Russian");
        test yr(9,-6,2);
        yr.CalculateRoots(1,2);
    };
