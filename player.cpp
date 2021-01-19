#include "player.h"
#include <iostream>
void Player::play(Deck& fDeck) {
    char choice = 'y';
    while (choice != 'n') {
        // ����� ����� �� ������ � ����
        takeOneCard(fDeck);
        // �������� ����
        printHand();
        // ������� ���� � ������ ������������ ������� �������
        // � ����  ���� (���������� ��� ���)
        std::cout << "Score is: " << calculateScore() << std::endl;
        std::cout << "Do you want another card?";
        std::cout << " (enter your choice, y - yes, n - no) ";
        // ��������� ����� ������������
        std::cin >> choice;
    }


        


}