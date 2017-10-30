// 线性表.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include"xianxingbiao.h"
#include <iostream>
using namespace std;

typedef void seqlist;
typedef void listnode;
struct teacher
{
	int age;
	int name[36];
};
int main()
{
	seqlist*seqlist1 = NULL;
	listnode*listnode1 = NULL;
	int ret = 0;
	teacher t1, t2, t3;
	Seqlist s1;
	seqlist1 =s1.Seqlist_create(10);
	if (seqlist1 == NULL)
	{
		cout << "s1.Seqlist_create error ret: "<<ret << endl;
		ret = -1;
		return ret;
	}
	t1.age = 30;
	t2.age = 31;
	t3.age = 32;
	ret = s1.Seqlist_insert(seqlist1, (listnode*)&t1, 0);
	if (ret != 0)
	{
		cout << "error" << endl;
	}
	ret = s1.Seqlist_insert(seqlist1, (listnode*)&t2, 0);
	if (ret != 0)
	{
		cout << "error" << endl;
	}
	ret = s1.Seqlist_insert(seqlist1, (listnode*)&t3, 0);
	if (ret != 0)
	{
		cout << "error" << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		listnode1 = s1.Seqlist_get(seqlist1, i);
		teacher *temp = NULL;
		temp=(teacher *) listnode1;
		if (temp == NULL)
		{
			cout << "teacher temp error" << endl;
			return -1;
		}
	    cout << temp->age << endl;
	}
	

    return 0;
}

