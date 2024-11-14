#include <iostream>
#include <time.h>
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
int main() {
	srand(time(0));
	int arr[15]{ 0 };
	init(&arr[0],15);
	display(&arr[0], 15);
}
