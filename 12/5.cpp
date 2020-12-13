// ConsoleApplication45.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int n;
    setlocale(LC_ALL, "Rus");
    printf("Год:");
    scanf_s("%i", &n);
    printf("год ");
    switch ((n) % 10) {
    case 0:
    case 1:
        printf("бел");
        break;
    case 2:
    case 3:
        printf("черн");
        break;
    case 4:
    case 5:
        printf("зелён");
        break;
    case 6:
    case 7:
        printf("красн");
        break;
    case 8:
    case 9:
        printf("жёлт");
        break;
    }

    switch ((n + 1) % 5) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 11:
        printf("ой ");
        break;
    case 6:
    case 7:
    case 8:
        printf("ого ");
        break;
    }

    switch ((n + 8) % 12) {
    case 0:
        printf("крысы\n");
        break;
    case 1:
        printf("коровы\n");
        break;
    case 2:
        printf("тигра\n");
        break;
    case 3:
        printf("зайца\n");
        break;
    case 4:
        printf("дракона\n");
        break;
    case 5:
        printf("змеи\n");
        break;
    case 6:
        printf("лошади\n");
        break;
    case 7:
        printf("овцы\n");
        break;
    case 8:
        printf("обезьяны\n");
        break;
    case 9:
        printf("курицы\n");
        break;
    case 10:
        printf("собаки\n");
        break;
    case 11:
        printf("свиньи\n");
        break;
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
