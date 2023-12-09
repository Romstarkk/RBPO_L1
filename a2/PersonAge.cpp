#include <iostream>
//ќсуществл€ет ввод с клавиатуры возраста человека
//¬ыходные данные: через возвращаемое значение	возраст (unsigned short)
unsigned short readPersonAge() {
    unsigned short ret;
    std::cin >> ret;
    return ret;
    //return std::cin >> new unsigned short;
}