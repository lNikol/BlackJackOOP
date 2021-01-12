#include "card.h"
#include "deck.h"
Deck::Deck() {
    //const unsigned short int numberOfShuffles = 5;
    for (int j = 0; j < Card::MAX_SUITS; j++) {
        for (int k = 0; k <Card::MAX_RANK; k++) {
            //������� ����� � �������� � � ������
            m_Deck.push_back(Card::Card(static_cast<Card::CardRank>(k), static_cast<Card::CardSuits>(j)));
        }
    }
};
void Deck::swap(Card &a, Card &b) {
    Card temp;
    temp = a;
    a = b;
    b = temp;
};

void Deck::shuffle() {
    int numberOfShuffles=5;
    for (int j = 0; j < numberOfShuffles; j++) {
        //������ ������
        for (int i = 0; i < Deck_size; i++) {
            //������� ����� �� ��������� �������
            int randomCard = rand() % Deck_size;
            //�������� ������� ������� � �������� ��������� �����
            swap(m_Deck[i], m_Deck[randomCard]);
        }
    }
};