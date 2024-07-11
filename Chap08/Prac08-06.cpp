#include <iostream>
using namespace std;

void Print(int*, int); // �Լ� ����
void Reverse(int*, int);
void Reverse2(int*, int);

void main() {
	const int size = 7;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7 };
	Reverse(arr, size);
	Print(arr, size);
}

void Print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Reverse(int* arr, int size) {
	int tarr[10]; // �ӽ� �迭 ����

	for (int i = 0; i < size; i++) {
		tarr[(size - 1) - i] = arr[i]; // �ӽ� �迭�� �Է¹��� �迭�� ��Ҹ� �������� ����
	}

	for (int i = 0; i < size; i++) {
		arr[i] = tarr[i]; // �ӽ� �迭�� ����� ��Ҹ� �Է¹��� �迭�� ����
	}
}

void Reverse2(int* arr, int size) {
	int* tarr = new int[size]; // �ӽ� �迭 ����, ���� �޸� �Ҵ�

	for (int i = 0; i < size; i++) {
		tarr[(size - 1) - i] = arr[i];
	}

	for (int i = 0; i < size; i++) {
		arr[i] = tarr[i];
	}

	delete[] tarr; // ���� �޸� ����
}