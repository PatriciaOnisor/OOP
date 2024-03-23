#include "Shop.h"
#include<string>
#include<vector>
#include"Article.h"
#include <iostream>

Shop& Shop::Add(Article* articol)
{
	items.push_back(articol);
	return *this;
}

int Shop::GetTotalPrice()
{
	int pret_total = 0;
	for (auto i : items)
		pret_total = pret_total + (i->GetQuantity() * i->GetPrice());
	return pret_total;
}

 int Shop::GetQuantity(std::string type)
{
	int cantitate_totala = 0;
	for (auto i : items)
		if(type==i->GetType())
			return i->GetQuantity();
}

void Shop::List()
{
	for (auto i : items)
		i->Print();
}
