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
void sortirovka(int* a, int u) {
	int k{ 0 };
	int t{ 0 };
	cout << "KAK MASSIV SORTIROVAT' BUDEM?" << endl;
	cout << "k = 1 - PO VOZRASTANIU" << endl;
	cout << "k = 2 - PO UBIVANIU" << endl;
	cout << "VVEDITE k" << endl;
	cin >> k;
	if (k == 1) {
		while (t != 15) {
			for (int i = 0; i < 14; i++) {
				if (*(a + i) > *(a + i + 1)) {
					int o{ 0 };
					o = *(a + i);
					*(a + i) = *(a + i + 1);
					*(a + i + 1) = o;
				}
			}
			t++;
		}
	}
	else {
		while (t != 15) {
			for (int i = 0; i < 14; i++) {
				if (*(a + i) < *(a + i + 1)) {
					int o{ 0 };
					o = *(a + i);
					*(a + i) = *(a + i + 1);
					*(a + i + 1) = o;
				}
			}
			t++;
		}
	}
	display(&(*(a)), 15);
}
int main() {
	srand(time(0));
	int arr[15]{ 0 };
	init(&arr[0], 15);
	display(&arr[0], 15);
	cout << endl;
	sortirovka(&arr[0], 15);
}
