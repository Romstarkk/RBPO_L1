#include <iostream>
#include "header.h"
/*  Осуществляет ввод с клавиатуры имя, возраст, рост и вес человека.
    Для ввода использовать разработанные ранее функции.
    Выходные данные через параметр по ссылке:
        имя (std::string &)
        возраст (unsigned short &)
        рост (unsigned short &)
        вес (unsigned short &)
    */
void readPersonData(
    std::string& name,
    unsigned short& age,
    unsigned short& height,
    unsigned short& weight) {
    std::cout << "Введите имя пользователя: ";
    name = readPersonName();
    std::cout << "\nВведите возраст пользователя: ";
    age = readPersonAge();
    std::cout << "\nВведите рост пользователя: ";
    readPersonHeight();
    std::cout << "\nВведите  вес пользователя: ";
    readPersonWeight(weight);
}