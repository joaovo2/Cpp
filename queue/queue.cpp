#include <iostream>
#include <queue>

// Uma classe do adaptador de contêiner de modelo que fornece uma restrição 
// de funcionalidade que limita o acesso aos elementos inicial e final 
// de alguns tipos de contêiner subjacentes.

int main()
{
	std::queue<std::string> Monsters;

	Monsters.push("Dracula");
	Monsters.push("Lobisomen");
	Monsters.push("Mumia");
	Monsters.push("Frankstein");
	Monsters.push("Hellboy");

	while (!Monsters.empty())
	{
		std::cout << "-> " << Monsters.front() << " <-" << std::endl;
		Monsters.pop();
	}

}