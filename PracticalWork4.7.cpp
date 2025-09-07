#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int mon = 1, tue = 2, wed = 3, thu = 4, fri = 5, sat = 6, sun = 7;
    int weekDay;
    std::string normalMenu = "Суп дня\nСалат дня\n";

    std::cout << "Введите день недели (от 1 до 7): ";
    std::cin >> weekDay;

     if (weekDay == mon) {
        std::cout << "Меню сегодня (понедельник): \n";
        std::cout  << normalMenu;
        std::cout  << "Куриная ножка с пюре \n";
        std::cout  << "Морс \n";
      } 
      else if (weekDay == tue) {
        std::cout << "Меню сегодня (вторник): \n";
        std::cout  << normalMenu;
        std::cout  << "Плов Чайханский \n";
        std::cout  << "Чай \n";
      } else if (weekDay == wed) {
        std::cout << "Меню сегодня (среда): \n";
        std::cout  << normalMenu;
        std::cout  << "Котлеты с картошкой \n";
        std::cout  << "Кофе \n";
      } else if (weekDay == thu) {
        std::cout << "Меню сегодня (четверг): \n";
        std::cout  << normalMenu;
        std::cout  << "Рыба с рисом \n";
        std::cout  << "Компот \n";
      } else if (weekDay == fri) {
        std::cout << "Меню сегодня (пятница): \n";
        std::cout  << normalMenu;
        std::cout  << "Баварские колбаски с капустой \n";
        std::cout  << "Пиво Баварское ))) \n";
      } else if (weekDay == sat) {
        std::cout << "Меню сегодня (суббота): \n";
        std::cout  << normalMenu;
        std::cout  << "Каша овсяная \n";
        std::cout  << "Сок \n";
      } else if (weekDay == sun) {
        std::cout << "Меню сегодня (воскресенье): \n";
        std::cout  << normalMenu;
        std::cout  << "Блины с черной икрой \n";
        std::cout  << "Квас \n";
      } else  {
        std::cout << "Ввели не корректый день недели \n";
      }
    }