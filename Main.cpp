#include <iostream>
#include <windows.h>
#include <io.h>
#include <fcntl.h>

int main() {
	_setmode(_fileno(stdout), _O_WTEXT);
	int option;
	std::wcout << "O que quer fazer ?\n [0] Somar" << std::endl;
	std::wcin >> option;
	if (option == 0) {
		int soma1, soma2;
		std::wcout << "Digite o primeiro valor para soma:" << std::endl;
		std::wcin >> soma1;
		std::wcout << "Digita o segundo valor para somar com: " << soma1 << std::endl;
		std::wcin >> soma2;
		std::wcout << "O resultado da soma é: " << soma1 + soma2 << std::endl;
	}
	return 0;
}
