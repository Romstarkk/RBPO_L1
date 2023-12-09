#include <iostream>

/*  Осуществляет вывод на экран имени, возраста, роста, веса, заработной платы человека.
    Входные данные через параметры по ссылке:
        имя (const std::string &)
        рост [по умолчанию “”] (const std::string &)
        вес [по умолчанию “”] (const std::string &)
    Входные данны ччерез параметры с использованием указателей:
        Возраст (const unsigned short *)
    Входные данны через глобальные объекты:
        заработная плата: salary (std::string)
*/
std::string ssalary = "";
void writePersonData(
    const std::string& name,
    const unsigned short* age,
    const std::string& height="",
    const std::string& weight=""
)
{

    std::cout << "Данные пользователя " << name << " :" << std::endl;
    std::cout << "  Рост: " << height << std::endl;
    std::cout << "  Вес: " << weight << std::endl;
    std::cout << "  Возраст: " << *age << std::endl;
    std::cout << "  Заработная плата: " << ssalary << std::endl;
}