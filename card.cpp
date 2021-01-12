#include "card.h"
Card::Card() {
	m_rank = CARD_2,
	m_suit =CARD_DIAMONDS,
};

Card::Card(CardRank f_rank,CardSuits f_suit) {
	m_rank = f_rank,
	m_suit = f_suit,
};


void Card::print_Card() {
};
int Card::get_Score() {
	return 0;
};