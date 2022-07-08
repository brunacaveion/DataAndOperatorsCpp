#include <iostream>

int main()
{
	int Num1{ 11 }, Num2{ 19 }, Resultado;

	//Num2++ is the same as:
	/*Num1=Num2;
	Num2=Num2+1*/

	//++Num1 This is the same as:
	/*Num1=Num1+1; 
	Num2=Num1;*/

	std::cout << "Current value of Num1: " << Num1 << " and " << "Num2: " << Num2 << "\n";
	Num1 = Num2++;
	std::cout << "Current value of Num1: " << Num1 << " and " << "Num2: " << Num2 << "\n";
	Num2 == ++Num1;
	std::cout << "Current value of Num1: " << Num1 << " and " << "Num2: " << Num2 << "\n";
	system("PAUSE");

}