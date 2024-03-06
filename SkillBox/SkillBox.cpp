#include <iostream>
#include <string>
#include <time.h>
#include "algorithm"

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

//--------------------

class Vector {

private:

    double x;
    double y;
    double z;

public:

    Vector(double x, double y, double z) : x(x), y(y), z(z) {};

    void showValues() {

        std::cout << "Вектор: (" << x << ", " << y << ", " << z << ")" << std::endl;

    }

    double getLength() {

        return std::sqrt(x * x + y * y + z * z);

    }

};

int main() {

    std::cout << "17.5 Практическая работа." << std::endl;

    Vector v(3, 4, 5);

    v.showValues();

    std::cout << "Длина модуля вектора: " << v.getLength() << std::endl;

    std::cout << std::endl << std::endl;

    //18.5 Практическая работа ------------------------------------------

    std::cout << "18.5 Практическая работа." << std::endl;

    int CountPlayer;

    std::cout << "Введите количество игроков: ";

    std::cin >> CountPlayer;

    Player* ArrayPlayers = new Player[CountPlayer];

    FormationLeaderboard(CountPlayer, ArrayPlayers);

    DisplayLeaderboard(CountPlayer, ArrayPlayers);

    delete[] ArrayPlayers;

}


