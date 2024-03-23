#pragma once
#include<string>
#include<vector>
#include"Article.h"
#include <iostream>
class Apple:public Article
{
	std::string tara;
	int quantity;
	int price;
public:
	Apple(int pret, int cantitate, std::string origine);
	//Apple(std::string tip, int pret, int cantitate);
	std::string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};

