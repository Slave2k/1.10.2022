﻿#include <cmath>
#include <iostream>
using namespace std;
int main() {

	//If7.Даны два числа.Вывести порядковый номер меньшего из них.
	//int a, b;
	//cin >> a >> b;
	//if (a < b)
	//	cout << 1 << endl; 
	//else if (b > a) {
	//	cout << 2 << endl;
	//}
	//else if (a == b) {
	//	cout << " = " << endl;
	//}
	////If8.Даны два числа.Вывести вначале большее, а затем меньшее из них.
	//int a, b;
	//cin >> a >> b;
	//if (a > b) {
	//	cout << a << " " << b << endl;
	//}
	//else if (b > a) {
	//	cout << b << " " << a << endl;
	//}
	//else if (b == a) {
	//	cout << " " << endl;

	//}
	//If9.Даны две переменные вещественного типа : A, B.Перераспределить значения данных переменных так, чтобы в A оказалось меньшее из значений,
	//	а в B — большее.Вывести новые значения переменных A и B.
	/*double a, b;
	cin >> a >> b;
	if (a > b) {
		if (a > b) {
			double t = a;
			a = b;
			b = t;
	}
		cout << a << " " << b << endl;*/
		/*If10.Даны две переменные целого типа : A и B.Если их значения не равны,
			то присвоить каждой переменной сумму этих значений, а если равны,
			то присвоить переменным нулевые значения.Вывести новые значения
			переменных A и B.*/
			//int a, b;
			//cin >> a >> b;
			//if (a != b) {
			//	int sum = a + b;
			//	a = sum;
			//	b = sum;
			//}
			//else {
			//	a = b = 0;
			//}
			//cout << a << " " << b << endl;
			//If12◦
			//	.Даны три числа.Найти наименьшее из них.
	/*int a, b, c;
	cin >> a >> b >> c;
	if (a < b && a < c) {
		cout << a << endl;

	}
	if (b < a && b < c) {
		cout << c << endl;
	}
	if (c < a && c < b) {
		cout << c << endl;
	}*/

	/*If24.Для данного вещественного x найти значение следующей функции f,
		принимающей вещественные значения :
	f(x) = 2·sin(x), если x > 0,
		6 − x, если x ≤ 0.*/
	/*double x, y;
	cin >> x;
	if (x > 0) {
		y = 2 * sin(x);
}
	else if (x <= 0) {
		y = 6 - x;
	}
	cout << y << endl;*/
	/*If25.Для данного целого x найти значение следующей функции f, принимающей значения целого типа :
	f(x) = 2·x, если x < −2 или x > 2,
		−3·x, в противном случае.*/
	/*int x, y;
	cin >> x;
	if ((x < -2) || (x > 2)) {
		y = 2 * x;
	}
	else {
		y = 3 - x;
	}
	cout << y << endl;*/
	/*If26◦
		.Для данного вещественного x найти значение следующей функции f,
		принимающей вещественные значения :
	−x, если x ≤ 0,
		f(x) = x
		2
		, если 0 < x < 2,
		4, если x ≥ 2.*/
	double x, y;
	cin >> x;
	if (x <= 0) {
		y = -1 * x;
	}
	else if ((0 < x)&& (x < 2)) {
		y = x * x;
	}
	else if (x >= 2) {
		y = 4;
	}
	cout << y << endl;
}

