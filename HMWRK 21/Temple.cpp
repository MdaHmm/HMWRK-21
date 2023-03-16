#include <iostream>

// Кодировка UTF-8

int main() {
	setlocale(LC_ALL, "Russian");

	int n, x, y;

	std::cout << "Введите два числа -> ";
	std::cin >> x >> y;

	int* px = &x;
	int* py = &y;

	std::cout << "\nСреднее арифметическое чисел " << x << " и " << y << " = " << (*px + *py) / 2 << std::endl;


	return 0;
}