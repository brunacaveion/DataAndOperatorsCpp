/* In this code you'll see how to enter numbers from the user in the prompt and do basic operations with them (+, -, *, /, % (stands for module between two numbers)) */

#include <iostream>

int main()
{
	int Numero01, Numero02;
	bool Comparacao;

	std::cout << "Write down the first number: "; 
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << std::endl;

	std::cout << "Write down the second number: ";
	std::cin >> Numero02;
	std::cout << "Numero02 = " << Numero02 << std::endl;

	Comparacao = (Numero01 == Numero02);
	std::cout << "Is Numero01 equal to Number02? " << Comparacao << "\n";

	Comparacao = (Numero01 != Numero02);
	std::cout << "Is Numero01 different of Number02? " << Comparacao << "\n";

	Comparacao = (Numero01 > Numero02);
	std::cout << "Is Numero01 bigger than Number02? " << Comparacao << "\n";

	system("PAUSE");

}
// CTRL + SHIFT + B compiles without opening the prompt