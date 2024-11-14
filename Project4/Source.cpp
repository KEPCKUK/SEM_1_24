#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;
void init(int* a, int u) {
	for (int i = 0; i < u; i++) {
		*(a + i) = rand() % 100;
	}
}
void display(int* a, int u) {
	for (int i = 0; i < u; i++) {
		cout << *(a + i) << ' ';
	}
}
void MXX(int* a, int u, int& y) {
	int MX{ 0 };
	for (int i = 0; i < u; i++) {
		if (*(a + i) > MX) {
			MX = *(a + i);
			y = i;
		}
	}
}
void MNN(int* a, int u, int& x) {
	int MN{ 100 };
	for (int i = 0; i < u; i++) {
		if (*(a + i) < MN) {
			MN = *(a + i);
			x = i;
		}
	}
}
void gadanie(int* a, int u) {
	int o{ 0 };
	cin >> o;
	int t{ 0 };
	while (t != 1) {
		if (o == *(a + u)) {
			cout << "UGADAl" << endl;
			t = 1;
		}
		else if (o > *(a + u)) {
			cout << "MEN'SHE" << endl;
			cin >> o;
		}
		else {
			cout << "BOL'SHE" << endl;
			cin >> o;
		}
	}
}
void chislo(int* a, int u) {
	int x{ 0 };
	int y{ 0 };
	MXX(&(*(a)), 15, y);
	MNN(&(*(a)), 15, x);
	cout << *(a + y) << ' ' << y << endl;
	cout << *(a + x) << ' ' << x << endl;;
	cout << "UGADAY NAIBOL'SHEE" << endl;
	gadanie(&(*(a)), y);
	cout << "UGADAY NAIMEN'SHEE" << endl;
	gadanie(&(*(a)), x);
}
int main() {
	srand(time(0));
	int arr[15]{ 0 };
	init(&arr[0], 15);
	display(&arr[0], 15);
	cout << endl;
	chislo(&arr[0], 15);
}
