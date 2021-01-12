#pragma once
#include <iostream>
#include "card.h"
#include <vector>
class Deck {
private:
	const int Deck_size = 52;
	std::vector<Card> m_Deck;
	void swap(Card &,Card &);
public:
	Deck();
	void shuffle(); //Перетасовать колоду
	Card pop();// Взять верхнюю карту
	void print_deck();// Показать колоду
};