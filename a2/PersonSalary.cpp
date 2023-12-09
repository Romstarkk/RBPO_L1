#include <iostream>
//Осуществляет ввод с клавиатуры заработной платы человека
//Выходные данные: через параметры с помощью указателя заработная плата (double*)
void readPersonSalary(double* salary) {
    std::cin >> *salary;
}