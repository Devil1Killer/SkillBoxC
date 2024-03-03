#include <iostream>
#include <string>

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
     

}


