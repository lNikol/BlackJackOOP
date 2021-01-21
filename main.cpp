#include <iostream>
#include "card.h"
#include "deck.h"
#include "hand.h"
#include "player.h"
#include "dealer.h"
#include <ctime>
using namespace std;
int main() {
	Deck my_deck;//конструктор по умолчанию (без параметров)
	//my_deck.print_deck();
	srand(time(0));
	for (int i = rand() % 5; i < 10; i++) {
		my_deck.shuffle();
		break;
	}
	
	Player player1; // Создаем игрока
	Dealer dealer; // Создаем дилера
	Hand::GameStatus currentGameStatus = Hand::GAME_CONTINUE;
	while (true) {
		player1.play(my_deck);
		currentGameStatus= player1.checkGameStatus();

		if (currentGameStatus == Hand::GAME_WIN) {
			cout << "Player1 win! " << endl;
			break;
		}
		else
			if (currentGameStatus == Hand::GAME_LOSE) {
				cout << "Player1 lose! " << endl;
				break;
			}
		if (currentGameStatus == Hand::GAME_CONTINUE) {
			dealer.play(my_deck);
			currentGameStatus = dealer.checkGameStatus();
			if (currentGameStatus == Hand::GAME_CONTINUE) {
				int player1Score = player1.calculateScore();
				int dealerScore = dealer.calculateScore();
				//У игрока больше очков - победил игрок
				
				if (player1Score > dealerScore) {
					cout << "D: " << dealerScore << endl;
					cout << "P: " << player1Score << endl;
					cout << "Player1 win!" << endl;
				}
				else
					if (dealerScore > player1Score) {
						cout << "D: " << dealerScore << endl;
						cout << "P: " << player1Score << endl;
						cout << "Dealer win!" << endl;
					}
					else
						if (player1Score == dealerScore){
							cout << "D: "<< dealerScore << endl;
							cout << "P: "<< player1Score << endl;
							cout << "Draw!" << endl;
						}
				// У дилера больше - победил дилер
				// Поровну - ничья




			}
			break;
		}
	}
	
	return 0;
}