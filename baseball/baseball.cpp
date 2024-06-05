#include <iostream>
using namespace std;

#include <cstdlib> // rand(), srand()
#include <ctime>   // time()

int main() {

	cout << "===== BASEBALL GAME =====" << endl << endl;

	int numA, numB, numC;

	srand((unsigned int)time(NULL)); // seed ������ ����ð� �ο�
	numA = rand() % 10; // 0 ~ 9

	do {
		numB = rand() % 10;
	} while (numA == numB);
	
	do {
		numC = rand() % 10;
	} while (numA == numC || numB == numC);

	// cout << endl << "���� ����: " << numA << " " << numB << " " << numC << endl << endl;

	int num1, num2, num3;
	int strike, ball;

	for (int i = 0; i < 10; i++) {
		strike = ball = 0;

		cout << i + 1 << "��° ��ȸ" << endl;

		cout << "1�� ���ڸ� �Է��ϼ���: ";
		cin >> num1;

		cout << "2�� ���ڸ� �Է��ϼ���: ";
		cin >> num2;

		cout << "3�� ���ڸ� �Է��ϼ���: ";
		cin >> num3;

		// cout << endl << "���� ����: " << numA << " " << numB << " " << numC << endl;
		cout << "�Է� ����: " << num1 << " " << num2 << " " << num3 << endl << endl;
	
		if (numA == num1) {
			// cout << "numA == num1" << endl;
			strike++;
		}
		if (numB == num2) {
			// cout << "numB == num2" << endl;
			strike++;
		}
		if (numC == num3) {
			// cout << "numC == num3" << endl;
			strike++;
		}

		if (numA == num2 || numA == num3) {
			// cout << "numA == num2 || numA == num3" << endl;
			ball++;
		}
		if (numB == num1 || numB == num3) {
			// cout << "numB == num1 || numB == num3" << endl;
			ball++;
		}
		if (numC == num1 || numC == num2) {
			// cout << "numC == num1 || numC == num2" << endl;
			ball++;
		}

		cout << i + 1 << "��° ���: " << strike << " ��Ʈ����ũ, " << ball << " ��" << endl << endl;
		if (strike == 3) {
			cout << "�����մϴ�" << endl;
			break;
		}
	}

	cout << endl << "����: " << numA << " " << numB << " " << numC << endl << endl;

	return 0;
}