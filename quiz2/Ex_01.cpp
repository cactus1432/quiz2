/*
#include <iostream>
#include<string.h>
using namespace std;

int main() {
	//1������
	string s1 = "Hello";
	string s2 = "World";

	if (s1.compare(s2)==0)
		cout << "2���� ���ڿ��� �����ϴ�." << endl;
	else
		cout << "2���� ���ڿ��� �ٸ��ϴ�." << endl;
	

	//10������
	for (int a = 1; a < 100; a++)
		for (int b = 1; b < 100; b++)
			for (int c = 1; c < 100; c++)
				if (pow(a, 2) + pow(b, 2) == pow(c, 2))
					cout << a << " " << b << " " << c << endl;


	//16�� ����
	int cash = 50;
	const int goal = 250;

	int bets, win; 
	bool result;
	int get = 0; 
	int deal = 0; 

	srand((unsigned int)time(NULL));

	cout << "�ʱ� �ݾ� $" << cash << endl;
	cout << "��ǥ �ݾ� $" << goal << endl;


	for (int game = 0; game < 1000; game++)
	{
		cash = 50, bets = 0, win = 0;
		while (true)
		{
			bets++;
			if ((double)rand() / RAND_MAX < 0.5)
			{
				cash++;
				win++;
			}
			else
				cash--;

			if (cash <= 0)
			{
				result = false;
				break;
			}
			if (cash >= goal)
			{
				result = true;
				break;
			}
		}

		if (result == true)
			get++;
		deal += bets;
	}

	cout << "1000 ���� " << get << "�� �¸�" << endl;
	cout << fixed;
	cout.precision(6);
	cout << "�̱� Ȯ��=" << get / 1000.0 * 100.0 << endl;
	cout << "��� ���� Ƚ�� = " << deal / 1000.0 << endl;




	return 0;
}

*/