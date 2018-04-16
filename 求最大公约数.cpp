#include <iostream>
#include <vector>
#include <time.h>
using namespace std;


// �����Լ��
//����һ,������,2 ~min(m,n)ö�ٳ���

int FindComFactor1(int m, int n)
{
	if (m == 0 || n == 0)
	{
		cerr << " no comfactor" << endl;
		return -1;
	}
	int factor = 1;
	for (int i = 2; i <= m && i <= n; ++i)
	{
		while (m % i == 0 && n % i == 0) // �˴�������if
		{
			factor *= i;
			m = m / i;
			n = n / i;
		}

	}
	return factor;
}

// ŷ������㷨����շת�����

int FindComFactor2(int m, int n)
{
	if (m == 0 || n == 0)
	{
		cerr << " no comfactor" << endl;
		return -1;
	}
	int rest = m % n;
	while (rest != 0)
	{
		m = n;
		n = rest;
		rest = m / n;
	}
	return n;
}


int main0413()
{
	int factor = FindComFactor2(24, 24);
	cout << "the common factor : " << factor << endl;
	system("pause");
	return 0;
}