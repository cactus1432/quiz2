/*#include <iostream>
#include<string.h>
using namespace std;

int main() {
	//1�� ����
    int num;
	cout << "�� ���� ������ �Է��մϱ�? ";
	cin >> num;
	int* p = new int[num];

	for (int i = 0; i < num; i++) {
		cout << "������ �Է��Ͻÿ� : ";
		cin >> p[i];
	}

	cout << "�Էµ� ������: ";
	for (int i = 0; i < num; i++)
		cout << p[i] << ", ";
	cout << endl;
	delete[] p;

	//2������
	int n;
	cout << "�󸶳� ���� �̸��� �Է� �Ͻðڽ��ϱ�? ";
	cin >> n;
	string* names = new string[n];

	for (int i = 0; i < n; i++) {
		cout << "�̸� �Է� # " << i + 1 << ": ";
		cin >> names[i];
	}
	cout << endl;
	cout << "������ �̸� ����Դϴ�." << endl;
	for (int i = 0; i < n; i++)
		cout << "�̸� #" << i + 1 << ": " << names[i] << endl;

	delete[] names;

	return 0;
}
*/
