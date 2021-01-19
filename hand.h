#pragma once
#include "card.h"
#include "deck.h"
#include <vector>
class Hand {
protected:
	std::vector<Card> m_hand;
public:
	enum GameStatus {
		GAME_WIN,
		GAME_DRAW,
		GAME_CONTINUE,
		GAME_LOSE,
		MAX_STATUS
	};


	//Hand();
	void takeOneCard(Deck&);
	void printHand();
	int calculateScore();
	GameStatus checkGameStatus();
};