#include "dealer.h"
#include "hand.h"
#include <iostream>
void Dealer::play(Deck& fDeck) {
	// ����� ����� �����, ���� �� ������� 17 ����� ��� ������
	// ���� ���� ������ 17
	// ����� ��������� ���� �������� 
	do {
		// ����� ����� 
		takeOneCard(fDeck);
	}while (calculateScore() < 17);
	printHand();
}