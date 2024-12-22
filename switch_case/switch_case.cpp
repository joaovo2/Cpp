#include <iostream>

int main()
{
	double a, b, res;
	char op;

	std::cout << "Insira o valor de 'a': ";
	std::cin >> a;

	std::cout << "Insira o operador matematico: ";
	std::cin >> op;

	std::cout << "Insira o valor de 'b': ";
	std::cin >> b;

	switch (op)
	{
	case '+':
		res = a + b;
		std::cout << res;
		break;
	case '-':
		res = a - b;
		std::cout << res;
		break;
	case '*':
		res = a * b;
		std::cout << res;
		break;
	case '/':
		res = a / b;
		std::cout << res;
		break;
	default:
		break;
	}
}