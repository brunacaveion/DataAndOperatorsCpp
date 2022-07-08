// Operation between two given numbers using switch function
#include <iostream>

int main()
{
	int Num1, Num2;
	char Operacao;
	std::cout << "\nWrite the first number: ";
	std::cin >> Num1;
	std::cout << "\nWrite the second number: ";
	std::cin >> Num2;
	std::cout << "What operator would you like to choose? \n+ \n- \n* \n/";
	std::cout << "\nWrite your operator: ";
	std::cin >> Operacao;

	switch (Operacao)
	{
	case '+':
		std::cout << "\nSum between them = " << Num1 + Num2;
		break;
	case '-':
		std::cout << "\nSubtraction between them = " << Num1 - Num2;
		break;
	case '*':
		std::cout << "\nMultiplication between them = " << Num1 * Num2;
		break;
	case '/':
		std::cout << "\nDivision between them = " << Num1 / Num2;
		break;
	default:
		std::cout << "Invalid operator!";
		break;
	}
	std::cout << "\n";
	system("PAUSE");
}