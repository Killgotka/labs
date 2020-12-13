// ConsoleApplication43.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int n;
    setlocale(LC_ALL, "Rus");
    printf_s("Число:");
    scanf_s("%i", &n);

    switch (n / 100) {
    case 1:
        printf_s("сто ");
        break;
    case 2:
        printf_s("двести ");
        break;
    case 3:
        printf_s("триста ");
        break;
    case 4:
        printf_s("четыреста ");
        break;
    case 5:
        printf_s("пятьсот ");
        break;
    case 6:
        printf_s("шестьсот ");
        break;
    case 7:
        printf_s("семьсот ");
        break;
    case 8:
        printf_s("восемьсот  ");
        break;
    case 9:
        printf_s("девятьсот  ");
        break;
    }

    if ((n % 100) / 10 == 1)
        switch (n % 100) {
        case 10:
            printf_s("десять\n");
            break;
        case 11:
            printf_s("одинадцать\n");
            break;
        case 12:
            printf_s("двенадцать\n");
            break;
        case 13:
            printf_s("тринадцать\n");
            break;
        case 14:
            printf_s("четырнадцать\n");
            break;
        case 15:
            printf_s("пятнадцать\n");
            break;
        case 16:
            printf_s("шестнадцать\n");
            break;
        case 17:
            printf_s("семнадцать\n");
            break;
        case 18:
            printf_s("восемнадцать\n");
            break;
        case 19:
            printf_s("девятнадцать\n");
            break;
        }
    else {
        switch ((n % 100) / 10) {
        case 2:
            printf_s("двадцать ");
            break;
        case 3:
            printf_s("тридцать ");
            break;
        case 4:
            printf_s("сорок ");
            break;
        case 5:
            printf_s("пятьдесят ");
            break;
        case 6:
            printf_s("шестьдесят ");
            break;
        case 7:
            printf_s("семьдесят ");
            break;
        case 8:
            printf_s("восемьдесят ");
            break;
        case 9:
            printf_s("девяносто ");
            break;
        }

        switch (n % 10) {
        case 1:
            printf_s("один\n");
            break;
        case 2:
            printf_s("два\n");
            break;
        case 3:
            printf_s("три\n");
            break;
        case 4:
            printf_s("четыре\n");
            break;
        case 5:
            printf_s("пять\n");
            break;
        case 6:
            printf_s("шесть\n");
            break;
        case 7:
            printf_s("семь\n");
            break;
        case 8:
            printf_s("восемь\n");
            break;
        case 9:
            printf_s("девять\n");
            break;
        }
    }
    return 0;
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
