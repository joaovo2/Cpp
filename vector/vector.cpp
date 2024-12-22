#include <iostream>
#include <vector>

//Um modelo de classe de contêineres em sequência que organiza 
// os elementos de um determinado tipo de maneira linear e 
// permite o acesso aleatório rápido a qualquer elemento.

int main()
{
	std::vector<std::string> vctr;

	vctr.push_back("Joao Vitor");
	vctr.push_back("Amanda");
	vctr.push_back("Brenda");
	vctr.push_back("Marcos");
	vctr.push_back("Carla");

	int i = 0;
	for (std::string animal : vctr)
	{
		i += 1;
		std::cout << i << " " << animal << std::endl;
	}
}