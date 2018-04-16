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

// ц╟ещеепР
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

//©Лее
int QuickSort(vector<int>& vec, int first, int end)
{
	if (vec.size() == 0)
	{
		cerr << "the vector has no data!" << endl;
		return -1 ;
	}
	int i = first, j = end;
	while (i < j)
	{
		while (i < j && vec[i] <= vec[j])
		{
			j--;
		}
		if (i < j)
		{
			int temp = vec[i];
			vec[i] = vec[j];
			vec[j] = temp;
		}
		while (i < j && vec[i] <= vec[j])
		{
			i++;
		}
		if (i < j)
		{
			int temp = vec[i];
			vec[i] = vec[j];
			vec[j] = temp;
		}
	}
	QuickSort(vec, first, i - 1);
	QuickSort(vec, i + 1, end);
}

//void QuickSort(vector<int>& vec, int first, int end)
//{
//	int povot = OnceSort(vec, first, end);
//	QuickSort(vec, first, povot - 1);
//	QuickSort(vec, povot + 1, end);
//}



int main030()
{
	vector<int> vec_;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 5; ++i)
	{
		vec_.push_back(rand() % 100);
	}
	//FunctionBubbleSort(vec_);
	QuickSort(vec_, 0, 4);
	TestVector(vec_);	
	system("pause");
	return 0;
}