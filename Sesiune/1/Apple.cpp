#include "Apple.h"

Apple::Apple(int pret, int cantitate, std::string origine)
{
	quantity = cantitate;
	price = pret;
	tara = origine;
}

std::string Apple::GetType()
{
	return "Apple";
}

int Apple::GetQuantity()
{
	return quantity;
}

int Apple::GetPrice()
{
	return price;
}

void Apple::Print()
{
	std::cout << GetType() << " (from=" << tara << ") Price=" << price << " Quantity=" << GetQuantity() << std::endl;
}
