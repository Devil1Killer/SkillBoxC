#include <iostream>
#include "Helpers.h"

int main()
{

    double a = 10, b = 10;;

    std::cout << "Введите первое число: ";
    std::cin >> a;

    std::cout << "Введите второе число: ";
    std::cin >> b;

    SquareNumber(a, b);

    std::cout << "Ответ: " << SquareNumber(a, b);

}


