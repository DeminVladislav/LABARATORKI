#include <iostream>
int main() {
    setlocale(LC_ALL, "rus");
    using namespace std;
    int a, b, S, P;
    cout << "Введите стороны a и b:" << endl;
    cin >> a >> b;
    S = a * b;
    P = 2 * (a + b);
    cout << "Площадь равна: " << S << endl;
    cout << "Периметр равен: " << P;
    return 0;
}