#include <iostream>
#include <vector>
#include <time.h>
using namespace std;


// 朴素的模式匹配算法
int Index(char s[], char p[], int pos)
{
	int i, j, slen, plen;
	slen = strlen(s);
	plen = strlen(p);
	i = pos;
	j = 0;
	while (i < slen && j < plen)
	{
		if (s[i] == p[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	if (j >= plen)
	{
		return i - plen;
	} 
	return -1;
}

// kmp 算法

int main()
{
	char s[10] = "abcdefg12";
	char p[5] = "defg";
	int ret = Index(s, p, 3);
	cout << " ret : " <<  ret << endl;
	system("pause");
	return 0;
}