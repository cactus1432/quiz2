/*#include <iostream>
#include<string.h>
using namespace std;

//2�� ���� �Լ�
inline double cal(double radius)
{
	double result;
	result = (4.0 / 3.0 * 3.14 * pow(radius, 3));
	return result;
}

//13�� �Լ�
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
	//2�� ����
	double rad, volume;

	cout << "�������� �Է��Ͻÿ�: ";
	cin >> rad;

	volume = cal(rad);

	cout << "���� ���Ǵ� " << volume << endl;

	//9�� ����
	int d1;
	int d2;
	int add;
	srand((unsigned int)time(NULL));
	while (1) {
		d1 = rand() % 6 + 1;
		d2 = rand() % 6 + 1;
		add = d1 + d2;
		cout << "������� �ֻ���: " << d1 << "+" << d2 << "=" << add << endl;
		if (add == 7 || add == 11)
		{
			cout << "����ڰ� �¸��Ͽ����ϴ�." << endl;
			break;
		}
		if (add == 2 || add == 3 || add == 12) {
			cout << "����ڰ� �й��Ͽ����ϴ�." << endl;
			break;
		}

	//13�� ����
	string pw;

	while (1) {
		cout << "��ȣ�� �Է��Ͻÿ�: ";
		cin >> pw;

		if (pwl(pw) && pws(pw) && pwn(pw)) {
			cout << "�����մϴ�." << endl;
			break;
		}
		else
			cout << "�������� �ʽ��ϴ�." << endl << "��й�ȣ���� �ݵ�� �빮�ڿ� �ҹ���, ���ڰ� ���ԵǾ�� �մϴ�." << endl;
	}


	return 0;
	}
	*/