#include <iostream>
#include <string>
#include <Windows.h>
#include "class.h"

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string answer;
    std::cout << "Вы хотите указать начальное значение счётчика ? Введите да или нет : ";
    std::cin >> answer;

    Counter counter;

    if (answer == "да")
    {
        int initialValue{};

        std::cout << "Введите начальное значение счётчика : ";
        std::cin >> initialValue;

        counter = Counter{ initialValue };
    }
    char command{};

    while (true)
    {
        std::cout << "Введите команду(‘ + ’, ‘ - ‘, ‘ = ‘ или ‘x’) : ";
        std::cin >> command;

        switch (command)
        {
        case  '+':
            counter.increment();
            break;

        case '-':
            counter.decrement();
            break;

        case '=':
            std::cout << counter.getValue() << std::endl;
            break;

        case 'x':
            std::cout << "До свидания!" << std::endl;
            return 0;

        default:
            std::cout << "Неизвестная команда!" << std::endl;
            break;
        }
    }
}