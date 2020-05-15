/* Напишите программу, которая вычисляет стоимость яблок. */

#include <iostream>

float get_number()
{
	float answer;
	std::cin >> answer;
	while (std::cin.fail() || (answer < 0))
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Нужно ввести положительное число, повторите ввод: ";
		std::cin >> answer;
	}
	return answer;
}

int main()
{
    setlocale(LC_CTYPE, "rus");
    std::cout << "Программа рассчитывает стоимость покупки по цене за 1 кг и весу.\nЦена за 1 кг (рубли): ";
    float price{ get_number() };
    std::cout << "Вес (кг): ";
    float weight{ get_number() };
    std::cout << "Стоимость покупки: " << weight * price << " руб." << std::endl;
    return 0;
}