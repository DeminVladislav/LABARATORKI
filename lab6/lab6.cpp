#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;


int task1(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №1" << endl;
	int A, B;
	cout << "Введите значения переменных A и B: ";
	cin >> A >> B;
	swap(A, B);
	cout << "Меняем значения местами, теперь A = B, а B = A. A = " << A << " B = " << B << endl;
	return 0;
}


int task2(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №2" << endl;
	int A, B, C, a1, b1, c1;
	cout << "Введите значения переменных A, B и C: ";
	cin >> A >> B >> C;
	a1 = A;
	b1 = B;
	c1 = C;
	B = a1;
	C = b1;
	A = c1;
	cout << "Меняем значения местами, теперь A = C, а B = A и C = B. A = " << A << " B = " << B << " C = " << C << endl;
	return 0;
}


int task3(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №3" << endl;
	int A, B, C, a1, b1, c1;
	cout << "Введите значения переменных A, B и C: ";
	cin >> A >> B >> C;
	a1 = A;
	b1 = B;
	c1 = C;
	B = c1;
	C = a1;
	A = b1;
	cout << "Меняем значения местами, теперь A = B, а B = C и C = A. A = " << A << " B = " << B << " C = " << C << endl;
	return 0;
}


int task4(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №4" << endl;
	cout << "Уравнение y = 3x^6 - 6x^2 - 7";
	int x, y;
	cout << "Введите значение x: ";
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "Уравнение y = 3x^6 - 6x^2 - 7 при данном x равняется: " << y << endl;
	return 0;
}


int task5(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №5" << endl;
	int x, y;
	cout << "Введите значение x: ";
	cin >> x;
	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	cout << "Уравнение y = 4(x - 3)^6 - 7(x - 3)^3 + 2 при данном x равняется: " << y << endl;
	return 0;
}


int task6(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №6" << endl;
	int A, a1;
	cout << "Введите значение A: ";
	cin >> A;
	a1 = pow(A, 3);
	A = A * a1 * a1 * A;
	cout << "A^8 = " << A << endl;
	return 0;
}


int task7(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №7" << endl;
	int A, a1, a2;
	cout << "Введите значение A: ";
	cin >> A;
	a1 = pow(A, 9);
	a2 = pow(A, 2);
	A = a1 * a2 * A * A * A * A;
	cout << "A^15 = " << A << endl;
	return 0;
}

int main() {
	setlocale(LC_CTYPE, "rus");
	int n;
	T1:
	cout << "Выберете задачу (1-7):" << endl;
	cout << "Для выхода из программы введите '0'" << endl;
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
	else if (n == 7) {
		task7(1);
	}
	else if (n!= 0) {
		cout << "Такой задачи нет\n";
	}else if (n == 0) {
		return 0;
	}
	goto T1;
}
