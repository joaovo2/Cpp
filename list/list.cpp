#include <iostream>
#include <list>

// Um modelo de classe de cont�ineres de sequ�ncia que mant�m seus elementos 
// em uma organiza��o linear e permite inser��es e 
// exclus�es eficientes em qualquer local na sequ�ncia.

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