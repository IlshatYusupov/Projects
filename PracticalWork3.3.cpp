#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    
    std::cout << "Задача 3. Злостные вредители!\n";

    int beginHeight = 100;
    int dailyGrowth = 50;
    int nightFade = 20;

    int thirdDayHeight = beginHeight + ((dailyGrowth - nightFade) * 2 + (dailyGrowth / 2));

    std::cout << "Высота бамбука к середине 3 дня: " << thirdDayHeight << ".\n";
}