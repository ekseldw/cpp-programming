#include <iostream>
using namespace std;

void Print(int*, int); // 함수 선언
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
	int tarr[10]; // 임시 배열 생성

	for (int i = 0; i < size; i++) {
		tarr[(size - 1) - i] = arr[i]; // 임시 배열에 입력받은 배열의 요소를 역순으로 저장
	}

	for (int i = 0; i < size; i++) {
		arr[i] = tarr[i]; // 임시 배열에 저장된 요소를 입력받은 배열에 복사
	}
}

void Reverse2(int* arr, int size) {
	int* tarr = new int[size]; // 임시 배열 생성, 동적 메모리 할당

	for (int i = 0; i < size; i++) {
		tarr[(size - 1) - i] = arr[i];
	}

	for (int i = 0; i < size; i++) {
		arr[i] = tarr[i];
	}

	delete[] tarr; // 동적 메모리 해제
}