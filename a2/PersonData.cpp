#include <iostream>
#include "header.h"
/*  ������������ ���� � ���������� ���, ������� � ���������� ����� ��������.
    ��� ����� ������������ ������������� ����� �������
    �������� ������ ����� �������� �� ������:
        ��� (std::string &)
        ������� (unsigned short &)
        ���������� ����� (double &)
*/
void readPersonData(std::string& name, unsigned short& age, double& salary) {
    std::cout << "������� ��� ������������: ";
    name = readPersonName();
    std::cout << "\n������� ������� ������������: ";
    age = readPersonAge();
    std::cout << "\n������� ��������� ����� ������������: ";
    readPersonSalary(&salary);
}