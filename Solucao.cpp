/* Ask from the user 3 numbers, print them and calculate their mean*/

#include <iostream>

int main()
{
	float Numero01, Numero02, Numero03;
	float Media;

	std::cout << "Write down the first number: ";
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << std::endl;

	std::cout << "Write down the second number: ";
	std::cin >> Numero02;
	std::cout << "Numero02 = " << Numero02 << std::endl;

	std::cout << "Write down the third number: ";
	std::cin >> Numero03;
	std::cout << "Numero03 = " << Numero03 << std::endl;

	Media = (Numero01 + Numero02 + Numero03)/3;
	std::cout << "The mean is: " << Media << "\n";

	system("PAUSE");

}