#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int x;
    
    std::cout << "Введите число очков опыта: ";
    std::cin >> x;

    std:: cout << "---------Считаем-------- \n";

    

    if (x >= 5000) {
      std::cout << "Ваш уровень:" << 4 << "\n";
  }   
    else if (x >= 2500) {
      std::cout << "Ваш уровень:" << 3 << "\n";
  }
    else if (x >= 1000) {
    std::cout << "Ваш уровень:" << 2 << "\n";
  }
    else if (x >=0) {
    std::cout << "Ваш уровень:" << 1 << "\n";
  }
    else   {  
    std::cout << "Ведите положительное число \n";
  }
}