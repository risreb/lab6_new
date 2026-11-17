#include <iostream>
#include <cmath>
#include <Windows.h>
#include "Math.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double variable1;
    double variable2;
    std::cout << "Введите первое число: " << std::endl;
    std::cin >> variable1;
    std::cout << "Введите второе число: " << std::endl;
    std::cin >> variable2;

    int choice;
    std::cout << "Выбирите операцию: " << "\n1 - сложение" << "\n2 - вычитание" 
        << "\n3 - умножение" << "\n4 - деление" << "\n5 - возведение в степень" << "\nВаш выбор: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        std::cout << MyMath::sum(variable1, variable2);
        break;
    case 2:
        std::cout << MyMath::diference(variable1, variable2);
        break;
    case 3:
        std::cout << MyMath::multiplication(variable1, variable2);
        break;
    case 4:
        if (variable2 != 0)
        {
            std::cout << MyMath::division(variable1, variable2);
        }
        else
        {
            std::cout << "Ошибка! На ноль делить нельзя! ";
        }
        break;
    case 5:
        std::cout << MyMath::exponen(variable1, variable2);
        break;

    }

    return 0;
}
