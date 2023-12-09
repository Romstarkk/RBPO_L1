#include <iostream>

/*  ������������ ����� �� ����� �����, ��������, �����, ����, ���������� ����� ��������.
    ������� ������ ����� ��������� �� ������:
        ��� (const std::string &)
        ���� [�� ��������� ��] (const std::string &)
        ��� [�� ��������� ��] (const std::string &)
    ������� ����� ������ ��������� � �������������� ����������:
        ������� (const unsigned short *)
    ������� ����� ����� ���������� �������:
        ���������� �����: salary (std::string)
*/
std::string ssalary = "";
void writePersonData(
    const std::string& name,
    const unsigned short* age,
    const std::string& height="",
    const std::string& weight=""
)
{

    std::cout << "������ ������������ " << name << " :" << std::endl;
    std::cout << "  ����: " << height << std::endl;
    std::cout << "  ���: " << weight << std::endl;
    std::cout << "  �������: " << *age << std::endl;
    std::cout << "  ���������� �����: " << ssalary << std::endl;
}