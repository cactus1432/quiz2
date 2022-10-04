/*
#include <iostream>
#include<string.h>
using namespace std;

int main() {
	//1번문제
	string s1 = "Hello";
	string s2 = "World";

	if (s1.compare(s2)==0)
		cout << "2개의 문자열은 같습니다." << endl;
	else
		cout << "2개의 문자열은 다릅니다." << endl;
	

	//10번문제
	for (int a = 1; a < 100; a++)
		for (int b = 1; b < 100; b++)
			for (int c = 1; c < 100; c++)
				if (pow(a, 2) + pow(b, 2) == pow(c, 2))
					cout << a << " " << b << " " << c << endl;


	//16번 문제
	int cash = 50;
	const int goal = 250;

	int bets, win; 
	bool result;
	int get = 0; 
	int deal = 0; 

	srand((unsigned int)time(NULL));

	cout << "초기 금액 $" << cash << endl;
	cout << "목표 금액 $" << goal << endl;


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

	cout << "1000 중의 " << get << "번 승리" << endl;
	cout << fixed;
	cout.precision(6);
	cout << "이긴 확률=" << get / 1000.0 * 100.0 << endl;
	cout << "평균 배팅 횟수 = " << deal / 1000.0 << endl;




	return 0;
}

*/