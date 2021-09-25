#include <iostream>
int main() {
    setlocale(LC_ALL, "rus");
    using namespace std;
    double a, b;
    cout << "Введите числа a и b:" << endl;
    cin >> a >> b;
    a = a * a;
    b = b * b;
    cout << "Сумма (a^2 + b^2) равна: " << (a + b) << endl;
    cout << "Разность (a^2 - b^2) равна: " << (a - b) << " Разность (b^2 - a^2) равна: " << (b - a) << endl;
    cout << "Умножение (a^2 * b^2) равно: " << (a * b) << endl;
    cout << "Частное (a^2 / b^2) равно: " << (a / b) << " Частное (b^2 / a^2) равно: " << (b / a);
    return 0;
}