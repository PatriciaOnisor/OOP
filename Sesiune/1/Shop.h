#pragma once
#include <iostream>
#include<string>
#include<vector>
#include"Article.h"
class Shop
{
private:
	std::vector<Article*> items;
public:
	Shop& Add(Article* articol);
	int GetTotalPrice();
	int GetQuantity(std::string type);
	void List();
};

