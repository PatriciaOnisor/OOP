#include "VideoGame.h"

VideoGame::VideoGame(int pret, int cantitate, std::string firma, std::string nume)
{
	quantity = cantitate;
	price = pret;
	name = nume;
	name_f = firma;
}

std::string VideoGame::GetType()
{
	return "VideoGame";
}

int VideoGame::GetQuantity()
{
	return quantity;
}

int VideoGame::GetPrice()
{
	return price;
}

void VideoGame::Print()
{
	std::cout << GetType() << "( Platform=" << name_f << ", Name=" << name << ") Price=" << price << " Qunatity=" << quantity<<std::endl;
}
