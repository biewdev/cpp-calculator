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
			std::wcout << "O resultado da soma é: " << value1 + value2 << std::endl;
		}
		else if (option == 1) {
			int value1, value2;
			std::wcout << "Digite o primeiro valor para subtração:" << std::endl;
			std::wcin >> value1;
			std::wcout << "Digita o segundo valor para subtração com: " << value1 << std::endl;
			std::wcin >> value2;
			std::wcout << "O resultado da subtração é: " << value1 - value2 << std::endl;
		}
		else if (option == 2) {
			int value1, value2;
			std::wcout << "Digite o primeiro valor para divisão:" << std::endl;
			std::wcin >> value1;
			std::wcout << "Digita o segundo valor para divisão com: " << value1 << std::endl;
			std::wcin >> value2;
			std::wcout << "O resultado da divisão é: " << value1 / value2 << std::endl;
		}
		else if (option == 3) {
			int value1, value2;
			std::wcout << "Digite o primeiro valor para multiplicação:" << std::endl;
			std::wcin >> value1;
			std::wcout << "Digita o segundo valor para multiplicação com: " << value1 << std::endl;
			std::wcin >> value2;
			std::wcout << "O resultado da multiplicação é: " << value1 * value2 << std::endl;
		}
	}
	return 0;
}
