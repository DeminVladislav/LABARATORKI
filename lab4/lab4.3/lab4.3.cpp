#include <iostream>
int main() {
	setlocale(LC_ALL, "rus");
	using namespace std;
	int d;
	cout « "Введите диагональ" « endl;
	cin » d;
	double L, pi = 3.14;
	L = pi * d;
	cout «"Длина круга равна: " « L;
	return 0;
}