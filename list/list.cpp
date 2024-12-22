#include <iostream>
#include <list>

// Um modelo de classe de contêineres de sequência que mantém seus elementos 
// em uma organização linear e permite inserções e 
// exclusões eficientes em qualquer local na sequência.

int main()
{
	std::list<std::string> planets;

	planets.push_back("Mars");
	planets.push_front("Venus");

	for (std::string p : planets)
	{
		std::cout << "-> " << p << std::endl;
	}
}