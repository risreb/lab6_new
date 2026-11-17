#include <iostream>
#include <Windows.h>

#include "figure.h"
#include "triangle.h"
#include "rightTriangle.h"
#include "isoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangley.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

void print_info(const Figure* figure)
{
    figure->print();
    std::cout << '\n';
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    EquilateralTriangle equilateralTriangle(30);

    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangley rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    std::cout << "Треугольник:\n";
    print_info(&triangle);

    std::cout << "Прямоугольный треугольник:\n";
    print_info(&rightTriangle);

    std::cout << "Равнобедренный треугольник:\n";
    print_info(&isoscelesTriangle);

    std::cout << "Равносторонний треугольник:\n";
    print_info(&equilateralTriangle);

    std::cout << "Четырёхугольник:\n";
    print_info(&quadrilateral);

    std::cout << "Прямоугольник:\n";
    print_info(&rectangle);

    std::cout << "Квадрат:\n";
    print_info(&square);

    std::cout << "Параллелограмм:\n";
    print_info(&parallelogram);

    std::cout << "Ромб:\n";
    print_info(&rhombus);

    return 0;
}
