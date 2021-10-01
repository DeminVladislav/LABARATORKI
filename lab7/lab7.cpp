#include <iostream>

using namespace std;

int task1(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №1" << endl;
	double alf;
	cout << "Угол альфа (0 < alfa < 360) в градусах = ";
	cin >> alf;
	alf = (alf * 3.14) / 180;
	cout << "Значение угла альфа в радианах = " << alf;
	return 0;
}


int task2(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №2" << endl;
	double alf;
	cout << "Угол альфа (0 < alfa < 2 * pi) в радианах = ";
	cin >> alf;
	alf = (alf * 180) / 3.14;
	cout << "Значение угла альфа в градусах = " << alf;
	return 0;
}


int task3(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №3" << endl;
	double x, a, y, rub, ruby;
	cout << "X кг конфет стоит A рублей" << endl;
	cout << "Введите X кг: ";
	cin >> x;
	cout << "Введите A рублей: ";
	cin >> a;
	rub = a / x;
	cout << "Цена за 1 кг = " << rub << endl;
	cout << "Введите Y кг: ";
	cin >> y;
	ruby = y * rub;
	cout << "Цена за Y кг = " << ruby;
	return 0;
}


int task4(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №4" << endl;
	double v1, v2, r, t, r2;
	cout << "Скорость первого автомобиля = ";
	cin >> v1;
	cout << "Скорость второго автомобиля = ";
	cin >> v2;
	cout << "Расстояние между ними = ";
	cin >> r;
	cout << "Время = ";
	cin >> t;
	r2 = r + (v1 * t) + (v2 * t);
	cout << "Расстояние между автомобилями через заданное время = " << r2;
	return 0;
}


int task5(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №5" << endl;
	cout << "Уравнение Ax + B = 0" << endl;
	int a, b, x;
	cout << "Введите коэфицент A (ненулевой!): ";
	cin >> a;
	cout << "Введите коэфицент B : ";
	cin >> b;
	x = (-b) / a;
	cout << "Корень уравнения x = " << x;
	return 0;
}


int task6(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №6" << endl;
	cout << "Система уравнений \nA1·x + B1·y = C1 \nA2·x + B2·y = C2 " << endl;
	double a1, b1, x, y, c1 ,c2, a2 ,b2, delta, delta1, delta2;
	cout << "Введите коэфицент A1: ";
	cin >> a1;
	cout << "Введите коэфицент B1 : ";
	cin >> b1;
	cout << "Введите C1 : ";
	cin >> c1;
	cout << "Введите коэфицент A2 : ";
	cin >> a2;
	cout << "Введите коэфицент B2 : ";
	cin >> b2;
	cout << "Введите C2 : ";
	cin >> c2;
	cout << "Решим с помощью формул Крамера" << endl;
	delta = a1 * b2 - a2 * b1;
	delta1 = c1 * b2 - c2 * b1;
	delta2 = a1 * c2 - a2 * c1;
	x = delta1 / delta;
	y = delta2 / delta;
	cout << "Решением системы уравнений являются x = " << x << " y = " << y;
	return 0;
}


int main() {
	setlocale(LC_CTYPE, "rus");
	int n;
	T1:
	cout << "Выберете задачу (1-6):" << endl;
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
	else if (n == 6) {
		task6(1);
	}
	else {
		cout << "Такой задачи нет\n";
		goto T1;
	}
}