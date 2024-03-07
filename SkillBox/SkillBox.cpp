#include <iostream>
#include <string>
#include "algorithm"
#include <vector>

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

//--------------------------------------------------

class Player {

public:

    std::string Name;
    int Score;

    void SetData(std::string Name, int Score) {

        this->Name = Name;
        this->Score = Score;

    }

};

void FormationLeaderboard(int CountPlayer, Player *ArrayPlayers) {

    std::string Name;
    int Score;

    for (int i = 0; i < CountPlayer; i++) {

        std::cout << "Введите имя " << i + 1 << " игрока: ";

        std::cin >> Name;

        std::cout << "Введите очки " << i + 1 << " игрока: ";

        std::cin >> Score;

        ArrayPlayers[i].SetData(Name, Score);

    }

}

void DisplayLeaderboard(int CountPlayer, Player* ArrayPlayers) {

    /*
    
    // Пользоваться контейнерами стандартной библиотеки, такими как std::vector и подобными, запрещено.
    // Если принципиально не нужно использовать библиотеки #include "algorithm"

    Player temp;

    for (int i = 0; i < CountPlayer; i++) {

        for (int j = i + 1; j < CountPlayer; j++) {

            if (ArrayPlayers[i].Score < ArrayPlayers[j].Score) {

                temp = ArrayPlayers[i];
                ArrayPlayers[i] = ArrayPlayers[j];
                ArrayPlayers[j] = temp;

            }

        }

    }

    */
    
    std::sort(ArrayPlayers, ArrayPlayers + CountPlayer, [](const Player& p1, const Player& p2) {

        return p1.Score > p2.Score;

    });

    for (int i = 0; i < CountPlayer; i++) {

        std::cout << "Имя игрока: " << ArrayPlayers[i].Name << " его очки: " << ArrayPlayers[i].Score << std::endl;

    }

}

int main() {

    std::cout << "18.5 Практическая работа." << std::endl;

    int CountPlayer;

    std::cout << "Введите количество игроков: ";

    std::cin >> CountPlayer;

    Player* ArrayPlayers = new Player[CountPlayer];

    FormationLeaderboard(CountPlayer, ArrayPlayers);

    DisplayLeaderboard(CountPlayer, ArrayPlayers);

    delete[] ArrayPlayers;

    std::cout << std::endl << std::endl;

    //19.5 Практическая работа ------------------------------------------

    std::cout << "19.5 Практическая работа." << std::endl;

    Animal* animals[3];

    animals[0] = new Dog;
    animals[1] = new Cat;
    animals[2] = new Ram;

    for (Animal* animal : animals) {

        animal->Voice();

    }

    delete[] animals;

}


