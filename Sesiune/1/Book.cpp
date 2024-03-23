#include "Book.h"
#include<string>
#include<vector>
#include"Article.h"
#include <iostream>

Book::Book(int pret, int cantitate, std::string titlu, std::string autor)
{
	nume = autor;
	title = titlu;
	price = pret;
	quantity = cantitate;
}

std::string Book::GetType()
{
	return "Book";
}

int Book::GetQuantity()
{
	return quantity;
}

int Book::GetPrice()
{
	return price;
}

void Book::Print()
{
	std::cout << GetType() << " (Title=" << title << ", Author=" << nume << ") Price=" << price << " Qunatity=" << quantity << std::endl;
}
