#include <iostream>

int main()
{
	std::cout << "Digite um valor iniciar a contagem: ";
	int Counter;
	std::cin >> Counter;

	std::cout << std::endl;

	std::cout << "Digite um valor para encerrar a contagem: ";
	int Stopper;
	std::cin >> Stopper;

	while (Counter <= Stopper)
	{
		std::cout << "-> " << Counter << std::endl;
		Counter = Counter + 1;
	}
}