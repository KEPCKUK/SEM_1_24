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
void chislo(int* a, int u) {
	int Abs{ 110 };
	int y{ 0 };
	y = rand() % 15;
	cout << *(a + y) << endl;
	int o{ 0 };
	cin >> o;
	int t{ 0 };
	while (t != 1) {
		if (o == *(a + y)) {
			cout << "YIPPEE" << endl;
			cout << "ETO ELEMENT NOMER - " << y + 1 << endl;
			t = 1;
		}
		else if (o > *(a + y)) {
			cout << "MEN'SHE" << endl;
			cout << "POPROBUI ESHIO" << endl;
			cin >> o;
		}
		else {
			cout << "BOL'SHE" << endl;
			cout << "POPROBUI ESHIO" << endl;
			cin >> o;
		}
	}
}
int main() {
	srand(time(0));
	int arr[15]{ 0 };
	init(&arr[0], 15);
	display(&arr[0], 15);
	cout << endl;
	chislo(&arr[0], 15);
}
