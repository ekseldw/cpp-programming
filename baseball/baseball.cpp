#include <iostream>
using namespace std;

#include <cstdlib> // rand(), srand()
#include <ctime>   // time()

int main() {

	cout << "===== BASEBALL GAME =====" << endl << endl;

	int baseball[3];

	srand((unsigned int)time(NULL)); // seed 값으로 현재시간 부여

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

		cout << i + 1 << "번째 기회" << endl;

		for (int j = 0; j < 3; j++) {
			cout << j + 1 << "번 숫자를 입력하세요: ";
			cin >> num[j];
		}

		cout << "입력 숫자: ";
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

		cout << i + 1 << "번째 결과: " << strike << " 스트라이크, " << ball << " 볼" << endl << endl;
		if (strike == 3) {
			cout << "축하합니다" << endl;
			break;
		}
	}

	cout << endl << "정답: ";
	for (int i = 0; i < 3; i++) {
		cout << baseball[i] << " ";
	}
	cout << endl;

	return 0;
}