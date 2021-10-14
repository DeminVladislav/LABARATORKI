#include <iostream>

using namespace std;

int task1(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №1" << endl;
	int A, B;
	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите число B: ";
	cin >> B;
	if ((A > 2) && (B <= 3)) {
		cout << "Справедливы неравенства A > 2 и B <= 3" << endl;
	}else {
		cout << "Ложно неравенство A > 2 или B <= 3" << endl;
	}
	return 0;
}


int task2(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №2" << endl;
	int A, B, C;
	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите число B: ";
	cin >> B;
	cout << "Введите число C: ";
	cin >> C;
	if ((A < B) && (B < C)) {
		cout << "Справедливо двойное неравенство A < B < C" << endl;
	}else {
		cout << "Ложно двойное неравенство A < B < C" << endl;
	}
	return 0;
}


int task3(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №3" << endl;
	int A;
	cout << "Введите число: ";
	cin >> A;
	if ((A < 100) && (A > 9) && (A % 2 == 0)) {
		cout << "Данное число является четным двузначным" << endl;
	}else {
		cout << "Данное число не является четным двузначным" << endl;
	}
	return 0;
}


int task4(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №4" << endl;
	int A, a1, a2, a3;
	T2:
	cout << "Введите трехзначное число: ";
	cin >> A;
	if (A < 99 || A>1000) {
		cout << "Трехзначное кхм кхм" << endl;
		goto T2;
	}
	a1 = A / 100;
	a2 = (A / 10) % 10;
	a3 = A % 10;
	if (a1 < a2 && a2 < a3) {
		cout << "Цифры данного числа образуют возрастающую последовательность" << endl;
	}else if (a3 < a2 && a2 < a1) {
		cout << "Цифры данного числа образуют убывающую последовательность" << endl;
	}else {
		cout << "Цифры данного числа не образуют последователность" << endl;
	}
	return 0;
}


int task5(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №5" << endl;
	int A, a1, a2, a3, a4;
	T2:
	cout << "Введите четырехзначное число: ";
	cin >> A;
	if (A < 999 || A > 10000) {
		cout << "Четырехзначное кхм кхм" << endl;
		goto T2;
	}
	a1 = A / 1000;
	a2 = (A / 100) % 10;
	a3 = (A / 10) % 10;
	a4 = A % 10;
	a1 = (a1 * 10) + a2;
	a2 = (a4 * 10) + a3;
	if (a1 == a2) {
		cout << "Данное число читается одинаково слева направо и справа налево" << endl;
	}else {
		cout << "Данное число не читается одинаково слева направо и справа налево" << endl;
	}
	return 0;
}


int task6(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №6" << endl;
	int a, b, c;
	T2:
	cout << "Введите сторону a: ";
	cin >> a;
	cout << "Введите сторону b: ";
	cin >> b;
	cout << "Введите сторону c: ";
	cin >> c;
	if (a + b <= c || b + c <= a || c + a <= b) {
		cout << "Такого треугольника не существует\n";
		goto T2;
	}
	if ((a * a == b * b + c * c) || (c * c == b * b + a * a) || (b * b == a * a + c * c)) {
		cout << "Треугольник со сторонами a, b, c является прямоугольным\n";
	}else {
		cout << "Треугольник со сторонами a, b, c не является прямоугольным\n";
	}
	return 0;
}


int task7(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №7" << endl;
	int a, b, c;
	cout << "Введите сторону a: ";
	cin >> a;
	cout << "Введите сторону b: ";
	cin >> b;
	cout << "Введите сторону c: ";
	cin >> c;
	if (a + b <= c || b + c <= a || c + a <= b) {
		cout << "Такого треугольника не существует\n";
	}
	else {
		cout << "Существует треугольник со сторонами a, b, c\n";
	}
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
	else if (n != 0) {
		cout << "Такой задачи нет\n";
	}
	else if (n == 0) {
		return 0;
	}
	goto T1;
}