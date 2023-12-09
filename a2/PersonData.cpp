#include <iostream>
#include "header.h"
/*  Осуществляет ввод с клавиатуры имя, возраст и заработную плату человека.
    Для ввода использовать разработанные ранее функции
    Выходные данные через параметр по ссылке:
        имя (std::string &)
        возраст (unsigned short &)
        заработная плата (double &)
*/
void readPersonData(std::string& name, unsigned short& age, double& salary) {
    std::cout << "Введите имя пользователя: ";
    name = readPersonName();
    std::cout << "\nВведите возраст пользователя: ";
    age = readPersonAge();
    std::cout << "\nВведите заработну плату пользователя: ";
    readPersonSalary(&salary);
}