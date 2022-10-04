/*#include <iostream>
#include<string.h>
using namespace std;

//2번 문제 함수
inline double cal(double radius)
{
	double result;
	result = (4.0 / 3.0 * 3.14 * pow(radius, 3));
	return result;
}

//13번 함수
bool pwl(string str)
{
	for (auto& c : str)
		if (isupper(c))
			return true;
	return false;
}

bool pws(string str)
{
	for (auto& c : str)
		if (islower(c))
			return true;
	return false;
}

bool pwn(string str)
{
	for (auto& c : str)
		if (48 <= c && c <= 57)
			return true;
	return false;
}


int main() {
	//2번 문제
	double rad, volume;

	cout << "반지름을 입력하시오: ";
	cin >> rad;

	volume = cal(rad);

	cout << "구의 부피는 " << volume << endl;

	//9번 문제
	int d1;
	int d2;
	int add;
	srand((unsigned int)time(NULL));
	while (1) {
		d1 = rand() % 6 + 1;
		d2 = rand() % 6 + 1;
		add = d1 + d2;
		cout << "사용자의 주사위: " << d1 << "+" << d2 << "=" << add << endl;
		if (add == 7 || add == 11)
		{
			cout << "사용자가 승리하였습니다." << endl;
			break;
		}
		if (add == 2 || add == 3 || add == 12) {
			cout << "사용자가 패배하였습니다." << endl;
			break;
		}

	//13번 문제
	string pw;

	while (1) {
		cout << "암호를 입력하시오: ";
		cin >> pw;

		if (pwl(pw) && pws(pw) && pwn(pw)) {
			cout << "안전합니다." << endl;
			break;
		}
		else
			cout << "안전하지 않습니다." << endl << "비밀번호에는 반드시 대문자와 소문자, 숫자가 포함되어야 합니다." << endl;
	}


	return 0;
	}
	*/