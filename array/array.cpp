#include <iostream>
#include <array>

//Armazena uma sequ�ncia de comprimento fixo de elementos.

int main()
{
	std::array<std::string, 5> names{ "Joao", "Vitor", "Oliveira", "Soares", "Pereira" };

	for (std::string name : names)
	{
		std::cout << name << " ";
	}
}