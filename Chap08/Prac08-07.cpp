#include <iostream>
using namespace std;

void Print(int*, int); // �Լ� ����
void Sort(int*, int);

void main() {
	const int size = 7;
	int arr[10] = { 7, 1, 3, 5, 6, 2, 4 };
	cout << "Before sorting" << endl;
	Print(arr, size);

	cout << endl;
	cout << "Sorting..." << endl;
	Sort(arr, size);

	cout << endl;
	cout << "After sorting" << endl;
	Print(arr, size);
}

void Print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Sort(int* arr, int size) {
	int temp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

// ����(Sort) �˰��� : �˰��� ���⵵?
// https://blog.naver.com/leeejjju/222788472832
