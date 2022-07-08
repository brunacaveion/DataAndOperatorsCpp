// Ternary operator exemple: Comparisson between 2 given numbers
#include <iostream>

int main()
{
	double MaiorNumero, Numero01, Numero02;

	std::cout << "Write the first number and press enter: ";
	std::cin >> Numero01;
	std::cout << "\nWrite the second number and press enter: ";
	std::cin >> Numero02;

	MaiorNumero = (Numero01 > Numero02) ? Numero01 : Numero02; // ? is for ternary operator
	std::cout << "\nThe biggest number is: " << MaiorNumero<<"\n";

	/*? operator will decide each command will be executed. If Numero01 > Numero02 is true it will execute the first part, otherwise it will be the second std::cout */
	(Numero01 > Numero02) ? std::cout << "\nThe first number is bigger than the second one\n"<<"\n" : std::cout << "\nThe second number is bigger than the first one\n"<<"\n";
	system("PAUSE");
}
