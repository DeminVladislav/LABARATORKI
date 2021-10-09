#include <iostream>

using namespace std;

int task1(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №1" << endl;
	int N;
	cout << "С начала суток прошло N секунд (N — целое). N = ";
	cin >> N;
	N = N % 60;
	cout <<  "Количество секунд, прошедших с начала последней минуты = " << N << endl;
	return 0;
}


int task2(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №2" << endl;
	int K;
	cout << "Целое число K, лежащее в диапазоне 1–365 = ";
	cin >> K;
	K = K % 7;
	cout << "Номер дня недели для K-го дня = " << K << endl;
	return 0;
}


int task3(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №3" << endl;
	int K, N;
	cout << "Целое число K, лежащее в диапазоне 1–365 = ";
	cin >> K;
	cout << "1 января было днем недели с номером N. N - целое число в диапазоне 1-7 = ";
	cin >> N;
	K = K % 7 + (N - 1);
	cout << "Номер дня недели для K-го дня = " << K << endl;
	return 0;
}



int task4(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №4" << endl;
	int A, B, C, S, S1;
	cout << "Введите сторону A: ";
	cin >> A;
	cout << "Введите сторону B: ";
	cin >> B;
	cout << "Введите сторону C: ";
	cin >> C;
	S = (A * B) / (C * C);
	S1 = (A * B) % (C * C);
	cout << "Кол-во квадратов со стороной C в прямоугольнике AxB = " << S << endl;
	cout << "Оставшиеся место в прямоугольнике AxB = " << S1 << endl;
	return 0;
}


int task5(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №5" << endl;
	int N;
	cout << "Введите номер некоторого года (целое положительное число): ";
	cin >> N;
	N = (N / 100) + 1;
	cout << "Номер столетия - " << N << endl;
	return 0;
}


int main() {
	setlocale(LC_CTYPE, "rus");
	int n;
	T1:
	cout << "Выберете задачу (1-5):" << endl;
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