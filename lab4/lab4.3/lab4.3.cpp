#include <iostream>
int main() {
	setlocale(LC_ALL, "rus");
	using namespace std;
	double a, b;
	cout << "Введите числа a и b:" << endl;
	cin >> a >> b;
	double c = (a + b) / 2;
	cout << "Среднее арифмитическое a и b: " << c;
	return 0;
}