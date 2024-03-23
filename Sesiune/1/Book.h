#pragma once
#include<string>
#include<vector>
#include"Article.h"
#include <iostream>
class Book: public Article
{
private:
	std::string title;
	std::string nume;
	int quantity;
	int price;
public:
	Book(int pret, int cantitate, std::string titlu, std::string autor);
	std::string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};

