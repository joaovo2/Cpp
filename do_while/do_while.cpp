#include <iostream>

int main()
{
	int Min = 0;

	std::cout << "Digite um numero maximo para a contagem: ";
	int Max;
	std::cin >> Max;

	do
	{
		std::cout << "-> " << Min << std::endl;
		Min = Min + 1;
	} while (Min <= Max);
}