#include <iostream>
#include <string>
using namespace std;

char ANSWER;
int many;

void Total(int prices, int many, int* total) {/*포인터 함수 total 사용; 밑의 main 함수에서 인자의 주소값을 복사. 한 번 계산을 할 때마다 내가 정해준 Total 함수의 내용처럼 누적하여 계산하도록 설정했다.*/
	*total += prices * many;/*total은 계속 누적해서 마지막에 누적된 값을 계산해야 하므로 += 연산자를 사용하여 누적해준다.*/
}


int main() {
	string menu[] = { "일반 라면", "김치 라면", "치즈 라면", "떡 라면", "떡 만두 라면" };
	int prices[] = { 3500, 4000, 4200, 4300, 4500 };
	int total = 0;/*초기화*/

	int num;
	do {
		cout << "***** 세바스찬의 라면가게 *****" << endl << endl;
		cout << "1. 일반 라면 (3500원)" << endl << "2. 김치 라면 (4000원)" << endl << "3. 치즈 라면 (4200원)" << endl << "4. 떡 라면 (4300원)" << endl << "5. 떡 만두 라면 (4500원)" << endl << endl << "구매하실 라면 번호를 입력해주세요 (종료는 0): ";
		cin >> num;
		if (num == 1 || num == 2 || num == 3 || num == 4 || num == 5) {
			cout << menu[num - 1] << "을 구매하시겠습니까 ? (Y / N) ";

			cin >> ANSWER;
			if (ANSWER == 'Y') {
				cout << "구매하실 라면 개수를 입력해 주세요.: ";
				cin >> many;
				cout << endl << endl;
				Total (prices[num - 1], many, &total); /*총 가격이 여기서 결정되므로 Total 함수를 호출해주고 사용자가 선택한 라면의 가격과 개수, 그에 따른 가격을 업데이트 해준다.*/
				cout << menu[num - 1] << " " << many << " 개를 구매하셨습니다." << endl << "가격은 " << many * prices[num - 1] << "원 입니다." << endl << endl;
			}

			if (ANSWER == 'N') {
				continue;

			}
		}
		if (num<0||num>5){
			cout << "제대로 된 숫자를 입력해주세요." << endl;
		}

	} while (num != 0);
	if (num == 0) {
		cout << "총 가격은" << total << " 원 입니다.";
	}

		

		




			






		

	
}

