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
void SR(int* a, int u) {
	double sr{ 0 };
	for (int i = 0; i < u; i++) {
		sr += *(a + i);
	}
	cout << sr / u << endl;
}
void MED(int* a, int u) {
	int md{ 0 };
	if (u % 2 == 0) {
		md = (*(a + u / 2) + *(a + (u / 2 + 1))) / 2;
	}
	else {
		md = *(a + u / 2);
	}
	cout << md << endl;
}
void MODA(int* a, int u) {
	int t{ 0 };
	int k{ 0 };
	for (int i = 0; i < u; i++) {
		for (int j = i+1; j < u; j++) {
			if (*(a + i) == *(a + j)) {
				k++;
			}
		}
		if (k != 0) {
			cout << *(a + i) << ' ';
			k = 0;
		}
	}
}
int main() {
	srand(time(0));
	int arr[15]{ 0 };
	init(&arr[0], 15);
	display(&arr[0], 15);
	cout << endl;
	SR(&arr[0], 15);
	MED(&arr[0], 15);
	MODA(&arr[0], 15);
}
