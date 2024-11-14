#include <iostream>
#include <time.h>
using namespace std;
void min_1(int a, int b) {
	if (a > b) {
		cout << b << endl;
	}
	else {
		cout << a << endl;
	}
}
void min_1(int a, int b, int c) {
	int x{ 0 };
	if (a > b) {
		x = b;
	}
	else {
		x = a;
	}
	if (x > c) {
		cout << c << endl;
	}
	else {
		cout << x << endl;
	}
}
void min_1(int a, int b, int c, int d) {
	int x{ 0 };
	int y{ 0 };
	if (a > b) {
		x = b;
	}
	else {
		x = a;
	}
	if (d > c) {
		y = c;
	}
	else {
		y = d;
	}
	if (x > y) {
		cout << y << endl;
	}
	else {
		cout << x << endl;
	}
}
void max_1(int a, int b) {
	if (a < b) {
		cout << b << endl;
	}
	else {
		cout << a << endl;
	}
}
void max_1(int a, int b, int c) {
	int x{ 0 };
	if (a < b) {
		x = b;
	}
	else {
		x = a;
	}
	if (x < c) {
		cout << c << endl;
	}
	else {
		cout << x << endl;
	}
}
void max_1(int a, int b, int c, int d) {
	int x{ 0 };
	int y{ 0 };
	if (a < b) {
		x = b;
	}
	else {
		x = a;
	}
	if (d < c) {
		y = c;
	}
	else {
		y = d;
	}
	if (x < y) {
		cout << y << endl;
	}
	else {
		cout << x << endl;
	}
}
int main() {
	int r{ 31 };
	int g{ 56 };
	int j{ 12 };
	int t{ 93 };
	min_1(r, g);
	min_1(g, r, j);
	min_1(r, t, g, j);
	max_1(r, g);
	max_1(g, r, j);
	max_1(r, t, g, j);
}
