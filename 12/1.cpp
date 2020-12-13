// ConsoleApplication35.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int x, y, z, g;
	int k, c;
	setlocale(LC_ALL, "Rus");
	printf("X (день) - ");
	scanf_s("%d", &x);
	printf("y (месяц) - ");
	scanf_s("%d", &y);
	g = x / 10; //десяток
	z = x % 10; //еденицы
	k = 0;
	while ((x > 10) && (x < 20))
	{
		switch (x)
		{
		case(11):
			printf("Одиннадцатое ");
			break;
		case(12):
			printf("Двенадцатое ");
			break;
		case(13):
			printf("Тринадцатое ");
			break;
		case(14):
			printf("Четырнадцатое ");
			break;
		case(15):
			printf("Пятнадцатое ");
			break;
		case(16):
			printf("Шестнадцатое ");
			break;
		case(17):
			printf("Семнадцатое ");
			break;
		case(18):
			printf("Восемнадцатое ");
			break;
		case(19):
			printf("Девятнадцатое ");
			break;
		}
		k = 1;
		break;
	}
	if (k != 1)
	{
		switch (g)
		{
		case(1):
			printf("Десятое ");
			break;
		case(2):
			printf("Двадцать ");
			break;
		case(3):
			printf("Тридцать ");
			break;
		}

		switch (z)
		{
		case(1):
			printf("Первое ");
			break;
		case(2):
			printf("Второе ");
			break;
		case(3):
			printf("Третье ");
			break;
		case(4):
			printf("Четвертое ");
			break;
		case(5):
			printf("Пятое ");
			break;
		case(6):
			printf("Шестое ");
			break;
		case(7):
			printf("Седьмое ");
			break;
		case(8):
			printf("Восьмое ");
			break;
		case(9):
			printf("Девятое ");
		}
	}

	switch (y)
	{
	case(1):
		printf("Января");
		break;
	case(2):
		printf("Февраля");
		break;
	case(3):
		printf("Марта");
		break;
	case(4):
		printf("Апреля");
		break;
	case(5):
		printf("Мая");
		break;
	case(6):
		printf("Июня");
		break;
	case(7):
		printf("Июля");
		break;
	case(8):
		printf("Августа");
		break;
	case(9):
		printf("Сентября");
		break;
	case(10):
		printf("Октября");
		break;
	case(11):
		printf("Ноября");
		break;
	case(12):
		printf("Декабря");
		break;
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
