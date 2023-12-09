#include <iostream>
//Осуществляет ввод с клавиатуры веса человека
//Выходные данные: через параметры по ссылке вес (unsigned short)
void readPersonWeight(unsigned short& weight) {//Осуществляет ввод с клавиатуры веса человека
    std::cin >> weight;
}