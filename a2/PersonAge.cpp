#include <iostream>
//������������ ���� � ���������� �������� ��������
//�������� ������: ����� ������������ ��������	������� (unsigned short)
unsigned short readPersonAge() {
    unsigned short ret;
    std::cin >> ret;
    return ret;
    //return std::cin >> new unsigned short;
}