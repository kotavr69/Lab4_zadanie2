/*Вариант 11
Дано целое число N (> 0).
Найти сумму 2 + (N + 1)2 + (N + 2)2 + . . .
+ (2·N )2 (целое число).
*/
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int number;
    int pos = 0;
    cin >> number;
    if (number > 0) {
        int const NUMBER_CONST = number;
        for (int i = 1; i < (NUMBER_CONST + 1); i++) {
            pos += (number + i) * 2;
        }
        cout << "Сумма последовательности: " << 2 + pos << endl;
    }
    else {
        cout << "Ошибка! Введите число больше 0!";
    }
}
