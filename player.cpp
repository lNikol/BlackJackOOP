#include "player.h"
#include <iostream>
void Player::play(Deck& fDeck) {
    char choice = 'y';
    while (choice != 'n') {
        // Взять карту из колоды в руку
        takeOneCard(fDeck);
        // Печатаем руку
        printHand();
        // Выводим счет и просим пользователя принять решение
        // о ходе  игры (продолжить или нет)
        std::cout << "Score is: " << calculateScore() << std::endl;
        std::cout << "Do you want another card?";
        std::cout << " (enter your choice, y - yes, n - no) ";
        // Считываем выбор пользователя
        std::cin >> choice;
    }


        


}