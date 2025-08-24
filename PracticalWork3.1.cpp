#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int amountInBus;                  
    int comeToBus;
    int outOfBus;
    int totalEarn;
    int salary;
    int fuel;
    int tax;
    int repair;
    int profit;

    std::cout << "Прибываем на остановку «Улица программистов». В салоне пассажиров: ";
    std::cin >> amountInBus;
    totalEarn = amountInBus * 20;
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> outOfBus;
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> comeToBus;
    amountInBus = amountInBus + comeToBus - outOfBus;
    totalEarn = totalEarn + (comeToBus * 20);
    std::cout << "Отправляемся с остановки «Улица программистов». В салоне пассажиров: " << amountInBus << ".\n";
    std::cout << "-----------Едем---------\n";

    std::cout << "Прибываем на остановку «Проспект алгоритмов». В салоне пассажиров: " << amountInBus << ".\n";
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> outOfBus;
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> comeToBus;
    amountInBus = amountInBus + comeToBus - outOfBus;
    totalEarn = totalEarn + (comeToBus * 20);
    std::cout << "Отправляемся с остановки «Проспект алгоритмов». В салоне пассажиров: " << amountInBus << ".\n";
    std::cout << "-----------Едем---------\n";

    std::cout << "Прибываем на остановку «Фреймворк». В салоне пассажиров: " << amountInBus << ".\n";
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> outOfBus;
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> comeToBus;
    amountInBus = amountInBus + comeToBus - outOfBus;
    totalEarn = totalEarn + (comeToBus * 20);
    std::cout << "Отправляемся с остановки «Фреймворк». В салоне пассажиров: " << amountInBus << ".\n";
    std::cout << "-----------Едем---------\n";

    std::cout << "Прибываем на остановку «Бульвар Переменных». В салоне пассажиров: " << amountInBus << ".\n";
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> outOfBus;
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> comeToBus;
    amountInBus = amountInBus + comeToBus - outOfBus;
    totalEarn = totalEarn + (comeToBus * 20);
    std::cout << "Отправляемся с остановки «Бульвар Переменных». В салоне пассажиров: " << amountInBus << ".\n";
    std::cout << "-----------Едем---------\n";

    salary = totalEarn / 4;
    fuel = totalEarn / 5;
    tax = totalEarn / 5;
    repair = totalEarn / 5;
    profit = totalEarn - salary - fuel - tax - repair;

    std::cout << "Всего заработали: " << totalEarn << ".\n";
    std::cout << "Зарплата водителя: " << salary << ".\n";
    std::cout << "Расходы на топливо: " << fuel << ".\n";
    std::cout << "Налоги: " << tax << ".\n";
    std::cout << "Расходы на ремонт машины: " << repair << ".\n";
    std::cout << "Итого доход: " << profit << ".\n";
}
