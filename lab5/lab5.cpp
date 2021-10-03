#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;


int task1(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №1" << endl;
	double x1, y1, x2, y2, r;
	cout << "Введите координаты двух точек.\nПервая точка (x1 , y1): ";
	cin >> x1 >> y1;
	cout << "Вторая точка(x2 , y2): ";
	cin >> x2 >> y2;
	r = pow(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2), 0.5);
	cout << "Расстояние между этими точками: " << r;
	return 0;
}


int task2(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №2" << endl;
	int A, B, C;
	cout << "Введите числовые значения трех точек.\nПервая точка (A): ";
	cin >> A;
	cout << "Вторая точка(B): ";
	cin >> B;
	cout << "Третья точка(C): ";
	cin >> C;
	cout << "Длина отрезка AC: " << abs(A - C) << endl;
	cout << "Длина отрезка BC: " << abs(B - C) << endl;
	cout << "Сумма отрезков AC и BC: " << (abs(A - C) + abs(B - C));
	return 0;
}


int task3(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №3" << endl;
	int A, B, C;
	cout << "Введите числовые значения трех точек(точка C должна находиться между A и B).\nПервая точка (A): ";
	cin >> A;
	cout << "Вторая точка(B): ";
	cin >> B;
	cout << "Третья точка(C должна находиться между A и B): ";
	cin >> C;
	cout << "Длина отрезка AC: " << abs(A - C) << endl;
	cout << "Длина отрезка BC: " << abs(B - C) << endl;
	cout << "Произведение отрезков AC и BC: " << (abs(A - C) * abs(B - C));
	return 0;
}


int task4(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №4" << endl;
	double x1, y1, x2, y2;
	cout << "Введите координаты двух противоположных вершин прямоугольника.\nПервая точка (x1 , y1): ";
	cin >> x1 >> y1;
	cout << "Вторая точка(x2 , y2): ";
	cin >> x2 >> y2;
	cout << "Периметр прямоугольника: " << (abs(x1 - x2) * 2 + abs(y1 - y2) * 2) << endl;
	cout << "Площадь прямоугольника: " << (abs(x1 - x2) * abs(y1 - y2));
	return 0;
}


int task5(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №5" << endl;
	double x1, y1, x2, y2, x3, y3, a, b, c, P, S;
	T2:
	cout << "Введите координаты трех вершин треугольника.\nПервая точка (x1 , y1): ";
	cin >> x1 >> y1;
	cout << "Вторая точка(x2 , y2): ";
	cin >> x2 >> y2;
	cout << "Третья точка(x3 , y3): ";
	cin >> x3 >> y3;
	a = pow(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2), 0.5);
	b = pow(pow(abs(x2 - x3), 2) + pow(abs(y2 - y3), 2), 0.5);
	c = pow(pow(abs(x1 - x3), 2) + pow(abs(y1 - y3), 2), 0.5);
	if (a + b <= c || b + c <= a || c + a <= b) {
		cout << "Такого треугольника не существует\n";
		goto T2;
	}
	else {
		P = a + b + c;
		S = pow(P / 2 * (P / 2 - a) * (P / 2 - b) * (P / 2 - c), 0.5);
		cout << "Периметр равен: " << P << "\nПлощадь равна: " << S;
	}
	return 0;
}

int main() {
	setlocale(LC_CTYPE, "rus");
	int n;
	T1:
	cout << "Выберете задачу (1-5):" << endl;
	cin >> n;
	if (n == 1) {
		task1(1);
	}
	else if (n == 2) {
		task2(1);
	}
	else if (n == 3) {
		task3(1);
	}
	else if (n == 4) {
		task4(1);
	}
	else if (n == 5) {
		task5(1);
	}
	else {
		cout << "Такой задачи нет\n";
		goto T1;
	}
}
