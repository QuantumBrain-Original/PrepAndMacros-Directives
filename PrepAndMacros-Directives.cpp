#include <iostream>
#include <Windows.h>

#define MODE 1

#ifndef MODE
#error Константа MODE не определена!
#endif

#if MODE == 0
	#define C_MESSAGE "Работаю в режиме тренировки"
#elif MODE == 1
	#define C_MESSAGE "Работаю в боевом режиме"
	int add(int& arg1, int& arg2)
	{
		return arg1 + arg2;
	}
#else
	#define C_MESSAGE "Неизвестный режим. Завершение работы"
#endif

#define cPrintStart std::cout <<
#define cPrintEnd << std::endl
#define cGetInput std::cin >>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	cPrintStart C_MESSAGE cPrintEnd;

	#if MODE == 1
		int tmp1, tmp2;
		cPrintStart "Введите число 1: ";
		cGetInput tmp1;
		cPrintStart "Введите число 2: ";
		cGetInput tmp2;
		cPrintStart "Результат сложения: " << add(tmp1, tmp2) cPrintEnd;
	#endif
}
