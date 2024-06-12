#include <iostream>
using namespace std;

#include <cstdlib> // rand(), srand()
#include <ctime>   // time()

int main() {

	cout << "===== BASEBALL GAME =====" << endl << endl;

	int baseball[3];

	srand((unsigned int)time(NULL)); // seed ������ ����ð� �ο�

	for (int i = 0; i < 3; i++) {
		baseball[i] = rand() % 10; // 0 ~ 9
		int j = 0;
		while(j < i) {
			if (baseball[j] == baseball[i]) {
				baseball[i] = rand() % 10; // 0 ~ 9
			}
			else {
				j++;
			}
		}
	}

	int num[3];
	int strike, ball;

	for (int i = 0; i < 10; i++) {
		strike = ball = 0;

		cout << i + 1 << "��° ��ȸ" << endl;

		for (int j = 0; j < 3; j++) {
			cout << j + 1 << "�� ���ڸ� �Է��ϼ���: ";
			cin >> num[j];
		}

		cout << "�Է� ����: ";
		for (int j = 0; j < 3; j++) {
			cout << num[j] << " ";
		}
		cout << endl << endl;


		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				if (baseball[j] == num[k]) {
					if (j == k) {
						strike++;
					}
					else {
						ball++;
					}
				}
			}
		}

		cout << i + 1 << "��° ���: " << strike << " ��Ʈ����ũ, " << ball << " ��" << endl << endl;
		if (strike == 3) {
			cout << "�����մϴ�" << endl;
			break;
		}
	}

	cout << endl << "����: ";
	for (int i = 0; i < 3; i++) {
		cout << baseball[i] << " ";
	}
	cout << endl;

	return 0;
}