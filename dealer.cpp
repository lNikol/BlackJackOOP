#include "dealer.h"
#include "hand.h"
#include <iostream>
void Dealer::play(Deck& fDeck) {
	// Дилер берет карты, пока не наберет 17 очков или больше
	// пока счет меньше 17
	// иначе повторяем наши действия 
	do {
		// берем карту 
		takeOneCard(fDeck);
	}while (calculateScore() < 17);
	printHand();
}