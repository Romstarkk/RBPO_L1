#include <string>
#include <iostream>
//Осуществляет ввод с клавиатуры имени человека
//Выходные данные: через возвращаемое значение имя (std::string)
std::string readPersonName() {
    std::string ret;
    std::cin >> ret;
    return ret;
}