#include "card.h"
#include "deck.h"
Deck::Deck() {
    //const unsigned short int numberOfShuffles = 5;
    for (int j = 0; j < Card::MAX_SUITS; j++) {
        for (int k = 0; k <Card::MAX_RANK; k++) {
            //Создать карту и добавить её в вектор
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
        //тусуем колоду
        for (int i = 0; i < Deck_size; i++) {
            //выбрали карту со случайным номером
            int randomCard = rand() % Deck_size;
            //обменяли местами текущую и случайно выбранную карту
            swap(m_Deck[i], m_Deck[randomCard]);
        }
    }
};