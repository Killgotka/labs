﻿// ConsoleApplication85.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int a[20];
    int n;
    printf_s("N: ");
    scanf_s("%d", &n);

    int i;
    for (i = 0; i < n; ++i) {
        printf_s("a[%d] : ", i + 1);
        scanf_s("%d", &a[i]);
    }

    int i2;
    for (i = n - 1; i >= 0; --i) {
        if (a[i] > 0) {
            ++n;
            for (i2 = n - 1; i2 > i; --i2) a[i2] = a[i2 - 1];
            a[i] = 0;
        }
    }

    for (i = 0; i < n; ++i) printf_s("  %d: %d\n", i + 1, a[i]);

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
