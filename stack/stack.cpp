#include <iostream>
#include <stack>

// Uma classe do adaptador de contêiner de modelo que fornece uma restrição 
// de funcionalidade que limita o acesso ao elemento mais 
// recentemente adicionado a alguns tipos de contêiner subjacentes.

int main()
{
	std::stack<int> DataStack;

	DataStack.push(123);
	DataStack.push(25);
	DataStack.push(80);
	DataStack.push(654);

	while (!DataStack.empty())
	{
		std::cout << "-> " << DataStack.top() << " <-" << std::endl;
		DataStack.pop();
	}
}