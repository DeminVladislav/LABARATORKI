﻿#include <iostream>

using namespace std;

int task1(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №1" << endl;
	int S;
	cout << "Введите размер памяти в байтах = ";
	cin >> S;
	S = S / 1024;
	if (S > 0) {
		cout << "Размер памяти в килобайтах = " << S << endl;
	}
	else {
		cout << "Размер памяти меньше одного килобайта " << 0 << endl;
	}
	return 0;
}


int task2(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №2" << endl;
	int A, B, n;
	T2:
	cout << "Отрезок A (A > B) = ";
	cin >> A;
	cout << "Отрезок B = ";
	cin >> B;
	if (B > A) {
		cout << "A > B !!!!!!!!!! -_-\n";
		goto T2;
	}
	n = A / B;
	cout << "На отрезке A можно полностью расположить n отрезков B, n = " << n << endl;
	return 0;
}


int task3(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №3" << endl;
	int A, B, n;
	T2:
	cout << "Отрезок A (A > B) = ";
	cin >> A;
	cout << "Отрезок B = ";
	cin >> B;
	if (B > A) {
		cout << "A > B !!!!!!!!!! -_-\n";
		goto T2;
	}
	n = A % B;
	cout << "На отрезке A можно полностью расположить n отрезков B, длина незанятой части отрезка A = " << n << endl;
	return 0;
}


int task4(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №4" << endl;
	int a, a1, a2;
	cout << "Введите двузначное число: ";
	cin >> a;
	a1 = a / 10;
	a2 = a % 10;
	a = a2 * 10 + a1;
	cout << "Меняем цифры местами: " << a << endl;
	return 0;
}


int task5(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №5" << endl;
	int a, a1, a2;
	cout << "Введите трехзначное число: ";
	cin >> a;
	a1 = a / 100;
	a2 = a % 100;
	a = a2 * 10 + a1;
	cout << "Зачеркиваем первую слева цифру и ставим ее справа: " << a << endl;
	return 0;
}


int main() {
	setlocale(LC_CTYPE, "rus");
	int n;
	T1:
	cout << "Выберете задачу (1-6):" << endl;
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
	else if (n != 0) {
		cout << "Такой задачи нет\n";
	}
	else if (n == 0) {
		return 0;
	}
	goto T1;
}