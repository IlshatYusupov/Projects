#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int x;
    int y;
    int z;
    int sum;
    
    std::cout << "Введите первое число: ";
    std::cin >> x;
    std::cout << "Введите второе число: ";
    std::cin >> y;
    std::cout << "Введите их сумму: ";
    std::cin >> sum;
    std:: cout << "---------Проверяем-------- \n";

    z = x + y;

    if (sum == z) {
        std::cout << "Верно! \n";
    }
    if (sum != z) { 
        std::cout << "Ошибка! Верный результат: " << z << "\n";
    }
}