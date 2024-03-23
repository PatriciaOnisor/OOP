#pragma once
#include<string>
#include<vector>
#include"Article.h"
#include <iostream>
class VideoGame: public Article
{
	std::string name;
	std::string name_f;
	int quantity;
	int price;
public:
	VideoGame(int pret, int cantitate, std::string firma, std::string nume);
	std::string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};

