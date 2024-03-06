#include <iostream>
#include <string>
#include <time.h>

class Vector {

private:

    double x;
    double y;
    double z;

public:

    Vector(double x, double y, double z) {

        this->x = x;
        this->y = y;
        this->z = z;

    }

    void showValues() {

        std::cout << "Вектор: (" << x << ", " << y << ", " << z << ")" << std::endl;

    }

    double getLength() {

        return std::sqrt(x * x + y * y + z * z);

    }

};

int main() {

    std::cout << "16.5 Практическая работа." << std::endl;

    const int a = 5, b = 5;

    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);

    int arrey[a][b];

    for (int i = 0; i < a; i++) {

        for (int j = 0; j < b; j++) {

            arrey[i][j] = i + j;
            std::cout << i + j << " ";

        }

        std::cout << std::endl;

    }

    int temp = 0;

    for (int i = 0; i < b; i++) {

        temp += arrey[(buf.tm_mday % a) - 1][i];

    }

    std::cout << std::endl;

    std::cout << temp;

    std::cout << std::endl << std::endl;

    //17.5 Практическая работа ------------------------------------------

    std::cout << "17.5 Практическая работа." << std::endl;

    Vector v(3, 4, 5);

    v.showValues();
    std::cout << "Длина модуля вектора: " << v.getLength() << std::endl;

}


