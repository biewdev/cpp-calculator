#include <iostream>
#include <windows.h>
#include <io.h>
#include <fcntl.h>

int main() {
	_setmode(_fileno(stdout), _O_WTEXT); // utf-8
	while (true) {
		int option;
		std::wcout << "O que quer fazer ?\n [0] Somar\n [1] Subtrair\n [2] Dividir\n [3] Multiplicar" << std::endl;
		std::wcin >> option;
		if (option == 0) {
			int value1, value2;
			std::wcout << "Digite o primeiro valor para somar:" << std::endl;
			std::wcin >> value1;
			std::wcout << "Digita o segundo valor para somar com: " << value1 << std::endl;
			std::wcin >> value2;
			std::wcout << "O resultado da soma �: " << value1 + value2 << std::endl;
		}
		else if (option == 1) {
			int value1, value2;
			std::wcout << "Digite o primeiro valor para subtra��o:" << std::endl;
			std::wcin >> value1;
			std::wcout << "Digita o segundo valor para subtra��o com: " << value1 << std::endl;
			std::wcin >> value2;
			std::wcout << "O resultado da subtra��o �: " << value1 - value2 << std::endl;
		}
		else if (option == 2) {
			int value1, value2;
			std::wcout << "Digite o primeiro valor para divis�o:" << std::endl;
			std::wcin >> value1;
			std::wcout << "Digita o segundo valor para divis�o com: " << value1 << std::endl;
			std::wcin >> value2;
			std::wcout << "O resultado da divis�o �: " << value1 / value2 << std::endl;
		}
		else if (option == 3) {
			int value1, value2;
			std::wcout << "Digite o primeiro valor para multiplica��o:" << std::endl;
			std::wcin >> value1;
			std::wcout << "Digita o segundo valor para multiplica��o com: " << value1 << std::endl;
			std::wcin >> value2;
			std::wcout << "O resultado da multiplica��o �: " << value1 * value2 << std::endl;
		}
	}
	return 0;
}
