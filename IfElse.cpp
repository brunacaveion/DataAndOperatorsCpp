// If Else exemple
#include <iostream>
#include <string>

int main()
{
	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;
	std::string SenhaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Write the password: ";
	std::cin >> SenhaDigitada;

	/*It will test if the access password is correct or not. If it is not it will close the prompt*/

	if (SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\nAllowed Access!" << "\n";
		bAcesso = true;
		//system("PAUSE");
	}
	else
	{
		std::cout << "\nAccess Denied!!!" << "\n";
		system("PAUSE");
		exit(0); // Closes the prompt
	}
	bFezSol = bCarroPronto = bSalarioDepositado = true;
	if (bAcesso == true)
	{
		if (bFezSol && bCarroPronto && bSalarioDepositado)
		{
			std::cout << "\nWe can go to the beach!" << std::endl;
		}
		else
		{
			std::cout << "We are not going to the beach!" << "\n";
		}
	}
	system("PAUSE");
}