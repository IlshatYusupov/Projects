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

    std:: cout << "-----Проверяем-----  \n";

    int remainder = x % y;

    if (remainder == 0) {
      std::cout << " Да " << x << " делится на " << y << " без остатка! \n";
  }   
    else {
      std::cout << " Нет " << x << " не делится на " << y << " без остатка! \n";
  }
}