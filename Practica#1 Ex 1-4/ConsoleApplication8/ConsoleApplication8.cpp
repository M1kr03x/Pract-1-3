
#include <iostream>
#include <string>


class  car {
    
public:
    car(std::string c) {
        CarName = c;
    }
    double maxspeed;
    double distance;
    
   
    std::string CarName;


    int CalculateTime(double t) {
        t = 0;
        t = distance / maxspeed;
        return t;
        
    }
    void nameplusspeed() {
        std::cout << "Название машины - " << "\t" << CarName << std::endl << "Максимальная скорость - " << "\t" << maxspeed;
    }
    void setSpeed(int s) {
        std::cout << "Введите скорость машины : " << CarName << ": ";
        std::cin >> s;
        maxspeed = s;

    }
    void setDistance(int b) {
        std::cout << "Введите дистанцию машины : " << CarName << ": ";
        std::cin >> b;
        distance = b;

    }
};

class car2 : public car {
public:
    car2(std::string c) : car(c) {

    }
};

int main()
{
    
    car samara("Mashinka");
    car FirstCar("Lada");
    car SecondCar("Ford");
    car ThirdCar("Zhigul))");
    car FourthCar("Bnw");

    FirstCar.setSpeed(1);
    SecondCar.setSpeed(2);
    ThirdCar.setSpeed(3);
    FourthCar.setSpeed(4);
    FirstCar.setDistance(1);
    SecondCar.setDistance(2);
    ThirdCar.setDistance(3);
    FourthCar.setDistance(4);
    FirstCar.CalculateTime(1);
    SecondCar.CalculateTime(2);
    ThirdCar.CalculateTime(3);
    FourthCar.CalculateTime(4);
    
    if (FirstCar.CalculateTime(1) < SecondCar.CalculateTime(1) and FirstCar.CalculateTime(1) < ThirdCar.CalculateTime(1) and FirstCar.CalculateTime(1) < FourthCar.CalculateTime(1)) {
        std::cout << "Победила " << FirstCar.CarName;
    }
    if (SecondCar.CalculateTime(1) < FirstCar.CalculateTime(1) and SecondCar.CalculateTime(1) < ThirdCar.CalculateTime(1) and SecondCar.CalculateTime(1) < FourthCar.CalculateTime(1)) {
        std::cout << "Победила " << SecondCar.CarName;
    }
    if (ThirdCar.CalculateTime(1) < FirstCar.CalculateTime(1) and ThirdCar.CalculateTime(1) < SecondCar.CalculateTime(1) and ThirdCar.CalculateTime(1) < FourthCar.CalculateTime(1)) {
        std::cout << "Победила " << ThirdCar.CarName;
    }
    if (FourthCar.CalculateTime(1) < SecondCar.CalculateTime(1) and FourthCar.CalculateTime(1) < ThirdCar.CalculateTime(1) and FourthCar.CalculateTime(1) < FirstCar.CalculateTime(1)) {
        std::cout << "Победила " << FourthCar.CarName;
    }
    
    


}
