#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int a = 42;
    int b = 153;
    int c;
    std::cout << "a: " << a << "\n";      /* На экран будет выведено 42 */
    std::cout << "b: " << b << "\n";      /* На экран будет выведено 153 */

    c = a;
    a = b;
    b = c;

    std::cout << "a: " << a << "\n";      /* На экран будет выведено 153 */
    std::cout << "b: " << b << "\n";      /* На экран будет выведено 42 */
}