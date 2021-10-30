// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <clocale>
#include "WorkStrok.h"
using namespace std;

int menu()
{
    cout << "Выбирите функцию" << "\n";
    cout << "1) Вычисление длины строки" << "\n";
    cout << "2) Конкатенация двух строк" << "\n";
    cout << "3) Копирование части строки" << "\n";
    cout << "4) Удаление подстроки" << "\n";
    cout << "5) Вставка подстроки" << "\n";
    cout << "6) Поиск подстроки" << "\n";
    cout << "7) Поиск подстроки с конца" << "\n";
    cout << "8) Замена подстроки" << "\n";
    cout << "9) Замена всех" << "\n";
    cout << "10) Выход" << "\n";
    return 0;
}
int proverka()
{
    while (true)
    {
        int a;
        cin >> a;
        if (cin.fail() || a <= 0 || a >= 11)
        {
            cin.clear();
            cin.ignore(1024, '\n');
            system("cls");
            menu();
        }
        else
        {
            return a;
        }
    }
}

int main()
{
    int BeginSt, LengthZamen;
    char stroka1[1024], stroka2[1024], stroka3[1024], stroka4[1024];
    setlocale(LC_ALL,"Russian");
    menu();
    int a = proverka();
    while (true)
    {
        if (a == 1)
        {
            system("cls");
            cout << "Введите строку" << "\n";
            cin >> stroka1;
            int Result = WorkStrok::LengthSt(stroka1);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться"<<"\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'y')
            {
                system("cls");
                menu();
                a = proverka();
            }
            else
            {
                system("cls");
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 2)
        {
            system("cls");
            cout << "Введите строку 1" << "\n";
            cin >> stroka1;
            cout << "Введите строку 2" << "\n";
            cin >> stroka2;
            char Result[1024]; 
            WorkStrok::CompositionSt(stroka1, stroka2, Result);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться" << "\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'n')
            {
                system("cls");
                menu();
                a = proverka();
            }
            else
            {
                system("cls");
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 3)
        {
            system("cls");
            cout << "Введите строку 1" << "\n";
            cin >> stroka1;
            cout << "Введите начало строки" << "\n";
            cin >> BeginSt;
            cout << "Введите длину строки" << "\n";
            cin >> LengthZamen;
            char Result[1024];
            WorkStrok::CopySt(stroka1, BeginSt, LengthZamen, Result);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться" << "\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'y')
            {
                system("cls");
                menu();
                a = proverka();
            }
            else
            {
                system("cls");
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 4)
        {
            system("cls");
            cout << "Введите строку 1" << "\n";
            cin >> stroka1;
            cout << "Введите начало строки" << "\n";
            cin >> BeginSt;
            cout << "Введите длину строки" << "\n";
            cin >> LengthZamen;
            char Result[1024];
            WorkStrok::DeleteSt(stroka1, BeginSt, LengthZamen, Result);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться" << "\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'y')
            {
                system("cls");
                menu();
                a = proverka();
            }
            else
            {
                system("cls");
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 5)
        {
            system("cls");
            cout << "Введите строку 1" << "\n";
            cin >> stroka1;
            cout << "Введите cтрокe 2" << "\n";
            cin >> stroka2;
            cout << "Введите позицию вставки" << "\n";
            cin >> BeginSt;
            char Result[1024];
            WorkStrok::PasteSt(stroka1, stroka2, BeginSt, Result);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться" << "\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'y')
            {
                system("cls");
                menu();
                a = proverka();
            }
            else
            {
                system("cls");
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 6)
        {
            system("cls");
            cout << "Введите строку 1" << "\n";
            cin >> stroka1;
            cout << "Введите cтрокe 2" << "\n";
            cin >> stroka2;
            int Result;
            Result =  WorkStrok::SearchSt(stroka1, stroka2);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться" << "\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'y')
            {
                system("cls");
                menu();
                a = proverka();
            }
            else
            {
                system("cls");
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 7)
        {
            system("cls");
            cout << "Введите строку 1" << "\n";
            cin >> stroka1;
            cout << "Введите cтрокe 2" << "\n";
            cin >> stroka2;
            int Result;
            Result = WorkStrok::SearchStEnd(stroka1, stroka2);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться" << "\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'y')
            {
                system("cls");
                menu();
                a = proverka();
            }
            else
            {
                system("cls");
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 8)
        {
            system("cls");
            cout << "Введите строку 1" << "\n";
            cin >> stroka1;
            cout << "Введите cтрокe 2" << "\n";
            cin >> stroka2;
            cout << "Введите cтрокe 3" << "\n";
            cin >> stroka3;
            char Result[1024];
            WorkStrok::SubstitutionSt(stroka1, stroka2, stroka3, Result);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться" << "\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'y')
            {
                system("cls");
                menu();
                a = proverka();
            }
            else
            {
                system("cls");
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 9)
        {
            system("cls");
            cout << "Введите строку 1" << "\n";
            cin >> stroka1;
            cout << "Введите cтрокe 2" << "\n";
            cin >> stroka2;
            cout << "Введите cтрокe 3" << "\n";
            cin >> stroka3;
            char Result[1024];
            WorkStrok::SubstitutionStAll(stroka1, stroka2, stroka3, Result);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться" << "\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'y')
            {
                system("cls");
                menu();
                a = proverka();
            }
            else
            {
                system("cls");
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 10)
        {
            system("cls");
            cout << "Завершение работы программы" << "\n";
            return 0;
        }
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
