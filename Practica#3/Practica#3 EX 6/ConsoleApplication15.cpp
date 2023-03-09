#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <math.h>  
#include <list>

class numbers {
public:
    int a;
    int b;
    int c;
    int d[100];
    double MatOj = 0;
    double Disp = 0;
   
    void countrand(int a, int b)  {
      
        
            srand(time(NULL));
            c = a + rand() % (b - a + 1);
        

    }
    void dispersia() {
        for (int i = 0; i <100; i++)
            MatOj = d[i] + MatOj;
        MatOj = MatOj / 100;
        for (int i = 0; i < 100; i++)
            Disp = pow((d[i] - MatOj), 2) + Disp;
        Disp = Disp / 99; 
        std::cout << Disp << std::endl;
    }
    double middlesquare(std::list<double> listi4) {
        double a = 0;
        double b = 0;
        int c = 1;
        for (double adun : listi4)
        {
            double amogus = a;
            a += (adun - amogus) / c;
            b += (adun - amogus) * (adun - a);
            c++;
        }
        return sqrt(b / (c - 2));
    }
    float medianamoment(int* arr, int size) {
        int temp;
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        if (size % 2 == 1)
            return arr[size / 2];
        else return (arr[size / 2 - 1] + arr[size / 2]) / 2;
    }

};

int main()
{
    numbers chel;
   chel.countrand(1,11);
   chel.dispersia();
  std::cout<< chel.middlesquare({ 1,32 });
}

