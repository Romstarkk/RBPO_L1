#include <iostream>
#include <string>
#include "header.h"

/*
    Лабораторная работа 1 РБПО

    Задание 1
    Все разработанные функции необходимо записать в файл main.cpp в следующем порядке:
        1.	ReadPersonAge
        2.	ReadPersonName
        3.	ReadPersonHeight
        4.	ReadPersonWeight
        5.	ReadPersonSalary
        6.	ReadPersonData (вариант 1)
        7.	ReadPersonData (вариант 2)
        8.	WritePersonData
        9.	Main
    Задание 2
        Каждую функцию разместить в отдельном файле.
        Глобальные переменные поместить вместе с определением той функции,
        для которой они предназначены.
*/

/*int* fu() {
    int a = 5;

    int *ptr = &a;
    return ptr;
}*/

int main()
{
    
    setlocale(LC_ALL, "Russian");
    std::string name;
    unsigned short* age = new unsigned short;
    *age = -1;
    double salary=-1;
    
    unsigned short weight=-1;
    int* ptr = fu();
    while (true) {
        system("cls");
        //std::cout << *ptr;
        std::cout << "Используйте кнопки 1-5 для выполнения операции" << std::endl;
        std::cout << "[1] Ввести данные пользователя (ЗП)" << std::endl;
        std::cout << "[2] Ввести данные пользователя (Рост, Вес)" << std::endl;
        std::cout << "[3] Вывести данные пользователя" << std::endl;
        std::cout << "[4] Описание" << std::endl;
        std::cout << "[5] Выход" << std::endl;
        int s = 0;
        std::cin >> s;
        switch ((int)s) {
        case 1:
        {
            readPersonData(name, *age, salary);
            height = -1;
            weight = -1;
            break;
        }
        case 2:
        {
            readPersonData(name, *age, height, weight);
            salary = -1;
            break;
        }
        case 3:
        {
            ssalary = std::to_string(salary);
            std::string sheight = "";
            std::string sweight = "";
            if (height == (unsigned short)-1 || weight == (unsigned short)-1) {
                sheight = "";
                sweight = "";
            }
            else {
                sheight = std::to_string(height);
                sweight = std::to_string(weight);

            }
            if (salary < 0) {
                ssalary = "";
            }
            writePersonData(name,  age, sheight, sweight);
            break;
        }
        case 4:
        {
            system("cls");
            std::cout << "РБПО" << std::endl
                << "Лабораторная работа 1" << std::endl
                << "Способы передачи данных между функциями" << std::endl
                << std::endl
                << "                                БАС2101" << std::endl
                << "                            Лебедев Р.С" << std::endl;
            break;
        }
        case 5:
        {
            exit(EXIT_SUCCESS);
        }
        }
        //std::cout << "Нажмите любую кнопку для продолжения...";
        system("pause");
    }

    
}

