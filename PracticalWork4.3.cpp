#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int x;
    int remainder;
    
    std::cout << "Введите число: ";
    std::cin >> x;

    std:: cout << "---------Проверяем-------- \n";

    remainder = x % 2;

    if (remainder == 0) {
    std::cout << "Число " << x << " — чётное \n";
}   
    else {
    std::cout << "Число " << x << " — не чётное \n";
}
}