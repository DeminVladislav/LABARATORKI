#include <iostream>
#include <cmath>
int main() {
    setlocale(LC_ALL, "rus");
    using namespace std;
    double a, b;
    cout << "Введите числа a и b:" << endl;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    cout << "Сумма (|a| + |b|) равна: " << (a + b) << endl;
    cout << "Разность (|a| - |b|) равна: " << (a - b) << " Разность (|b| - |a|) равна: " << (b - a) << endl;
    cout << "Умножение (|a| * |b|) равно: " << (a * b) << endl;
    cout << "Частное (|a| / |b|) равно: " << (a / b) << " Частное (|b| / |a|) равно: " << (b / a);
    return 0;
}