#include <iostream>
#include "header.h"
/*  ������������ ���� � ���������� ���, �������, ���� � ��� ��������.
    ��� ����� ������������ ������������� ����� �������.
    �������� ������ ����� �������� �� ������:
        ��� (std::string &)
        ������� (unsigned short &)
        ���� (unsigned short &)
        ��� (unsigned short &)
    */
void readPersonData(
    std::string& name,
    unsigned short& age,
    unsigned short& height,
    unsigned short& weight) {
    std::cout << "������� ��� ������������: ";
    name = readPersonName();
    std::cout << "\n������� ������� ������������: ";
    age = readPersonAge();
    std::cout << "\n������� ���� ������������: ";
    readPersonHeight();
    std::cout << "\n�������  ��� ������������: ";
    readPersonWeight(weight);
}