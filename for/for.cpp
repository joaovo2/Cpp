#include <iostream>

int main()
{
	std::cout << "Digite o valor de interrupção da contagem: ";
	int Stopper;
	std::cin >> Stopper;

	for (size_t i = 0; i <= Stopper; i++)
	{
		std::cout << "-> " << i << std::endl;
	}
}