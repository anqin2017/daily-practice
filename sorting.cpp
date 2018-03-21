#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

void TestVector(vector<int> vec)
{
	int len = vec.size();
	int errnum = 0;
	for (int i = 0; i < len; ++i)
	{
		for (int j = i; j < len; ++j)
		{
			if (vec[i] > vec[j])
			{
				errnum++;
			}
		}
	}
	if (errnum > 0)
	{
		cout << "sorting failed!" << "error num: " << errnum << endl;
	}
	else
	{
		cout << "sorting pass " << endl;
	}
}

// Ã°ÅÝÅÅÐò
void FunctionBubbleSort(vector<int>& vec)
{
	if (vec.size() == 0)
	{
		cerr << "the vector has no data!" << endl;
		return;
	}
	int len = vec.size();
	for (int i = 0; i < len; ++i)
	{
		for (int j = i; j < len; ++j)
		{
			if (vec[i] > vec[j])
			{
				int temp = vec[i];
				vec[i] = vec[j];
				vec[j] = temp;
			}
		}
	}
}

int main()
{
	vector<int> vec_;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 100; ++i)
	{
		vec_.push_back(rand() % 100);
	}
	FunctionBubbleSort(vec_);
	TestVector(vec_);	
	system("pause");
	return 0;
}