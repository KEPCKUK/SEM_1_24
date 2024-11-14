#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;
void init(int* a, int u) {
	for (int i = 0; i < u; i++) {
		*(a + i) = rand() % 100;
		if (*(a + i) == 0) {
			(*(a + i))++;
		}
	}
}
void display(int* a, int u) {
	for (int i = 0; i < u; i++) {
		cout << *(a + i) << ' ';
	}
}
void MODA(int* a, int u) {
	int k{ 0 };
	int t{ 0 };
	int arr[15]{ 0 };
	int arr1[15]{ 0 };
	for (int i = 0; i < u; i++) {
		for (int j = i + 1; j < u; j++) {
			if (*(a + i) == *(a + j)) {
				arr[k] = *(a + i);
				k++;
			}
		}
	}
	if (arr[0] != 0) {
		for (int i = 0; i < u; i++) {
			if (*(a + i) != 0) {
				t++;
			}
		}
		k = 0;
		for (int i = 0; i < t; i++) {
			for (int j = 0; j < u; j++) {
				if (arr[i] == *(a + j)) {
					k++;
				}
			}
			arr1[i] = k;
			k = 0;
		}
		for (int i = 0; i < t; i++) {
			for (int j = 0; j < u; j++) {
				if (arr[i] == *(a + j)) {
					*(a + j) = 100 + 1;
				}
			}
		}
		for (int i = 0; i < u; i++) {
			if (*(a + i) < 100) {
				*(a + i) = 1;
			}
		}
		display(&(*(a)), 15);
		cout << endl;
		display(&arr[0], 15);
		cout << endl;
		display(&arr1[0], 15);
	}
	else {
		cout << "NETU" << endl;
	}
}
int main() {
	srand(time(0));
	int arr[15]{ 0 };
	init(&arr[0], 15);
	display(&arr[0], 15);
	cout << endl;
	MODA(&arr[0], 15);
}