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
void filtr(int* a, int u) {
	int k{ 0 };
	int t{ 0 };
	cout << "KAK MASSIV FILTROVAT' BUDEM?" << endl;
	cout << "k = 1 - VSE CHIOTNIE" << endl;
	cout << "k = 2 - VSE NECHIOTNIE" << endl;
	cout << "k = 3 - BOL'SHE CHEGO-TO" << endl;
	cout << "VVEDITE k" << endl;
	cin >> k;
	if (k == 1) {
		for (int i = 0; i < 14; i++) {
			if (*(a + i) % 2 == 0) {
				cout << *(a + i) << ' ';
			}
		}
	}
	else if (k == 2) {
		for (int i = 0; i < 14; i++) {
			if (*(a + i) % 2 != 0) {
				cout << *(a + i) << ' ';
			}
		}
	}
	else {
		int t{ 0 };
		cout << "VVEDITE CHTO-TO - ";
		cin >> t;
		for (int i = 0; i < 14; i++) {
			if (*(a + i) > t) {
				cout << *(a + i) << ' ';
			}
		}
	}
}
int main() {
	srand(time(0));
	int arr[15]{ 0 };
	init(&arr[0], 15);
	display(&arr[0], 15);
	cout << endl;
	filtr(&arr[0], 15);
}
