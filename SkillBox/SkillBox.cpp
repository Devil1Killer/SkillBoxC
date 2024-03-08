#include <iostream>

class Animal {

public:

    virtual void Voice() {

        std::cout << "Animal sound" << std::endl;

    }

};

class Cat : public Animal {

public:

    void Voice() override {

        std::cout << "Mau!" << std::endl;

    }

};

class Dog : public Animal {

public:

    void Voice() override {

        std::cout << "Woof!" << std::endl;

    }

};

class Ram : public Animal {

public:

    void Voice() override {

        std::cout << "Be!" << std::endl;

    }

};

int main() {

    std::cout << "19.5 Практическая работа." << std::endl;

    Animal* animals[3];

    animals[0] = new Dog;
    animals[1] = new Cat;
    animals[2] = new Ram;

    for (Animal* animal : animals) {

        animal->Voice();

    }

    for (Animal* animal : animals) {

        delete animal;

    }

}


