#include <iostream>
#include <string>

void ParityAlgorithm(int number, bool key) {

    for (int i = key ? 1 : 0; i <= number; i += 2) {

        std::cout << i << " ";

    }

    std::cout << std::endl;

}

int main()
{

    std::string text;

    std::cout << "Введите слово: ";
    std::cin >> text;

    std::cout << text.length() << std::endl;
    std::cout << text.front() << std::endl;
    std::cout << text.back() << std::endl;

    std::cin.get();

    std::cout << "Введите слова: ";
    getline(std::cin, text);
    
    std::cout << text.size() << std::endl;
    std::cout << text[0] << std::endl;
    std::cout << text[text.size() - 1] << std::endl;
     
    // 15.4 Практическая работа

    int number;

    std::cout << "Введите число: ";
    std::cin >> number;

    std::cout << (!(number % 2) ? "Чётные: " : "Нечётные: ");
    ParityAlgorithm(number, number % 2);





    //for (int i = 0; i < number; i++) {

    //    std::cout << (!(i % 2) ? "Чётные: " : "Нечётные: ") << i << std::endl;

    //}


}


