#include <iostream>
#include <string>
#include "header.h"

/*
    ������������ ������ 1 ����

    ������� 1
    ��� ������������� ������� ���������� �������� � ���� main.cpp � ��������� �������:
        1.	ReadPersonAge
        2.	ReadPersonName
        3.	ReadPersonHeight
        4.	ReadPersonWeight
        5.	ReadPersonSalary
        6.	ReadPersonData (������� 1)
        7.	ReadPersonData (������� 2)
        8.	WritePersonData
        9.	Main
    ������� 2
        ������ ������� ���������� � ��������� �����.
        ���������� ���������� ��������� ������ � ������������ ��� �������,
        ��� ������� ��� �������������.
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
        std::cout << "����������� ������ 1-5 ��� ���������� ��������" << std::endl;
        std::cout << "[1] ������ ������ ������������ (��)" << std::endl;
        std::cout << "[2] ������ ������ ������������ (����, ���)" << std::endl;
        std::cout << "[3] ������� ������ ������������" << std::endl;
        std::cout << "[4] ��������" << std::endl;
        std::cout << "[5] �����" << std::endl;
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
            std::cout << "����" << std::endl
                << "������������ ������ 1" << std::endl
                << "������� �������� ������ ����� ���������" << std::endl
                << std::endl
                << "                                ���2101" << std::endl
                << "                            ������� �.�" << std::endl;
            break;
        }
        case 5:
        {
            exit(EXIT_SUCCESS);
        }
        }
        //std::cout << "������� ����� ������ ��� �����������...";
        system("pause");
    }

    
}

