#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int x;
    int y;

    std::cout << "Введите первое число: ";
    std::cin >> x;
    std::cout << "Введите второе число: ";
    std::cin >> y;
    std:: cout << "---------Проверяем-------- \n";

    if (x > y) {
        std::cout << "Наименьшее число: " << y << "\n";
    }
    if (x < y) { 
        std::cout << "Наименьшее число: " << x << "\n";
    } 
    else if (x==y) {
        std::cout << " Числа равны! \n";
}
}