// DemoSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "demo_data_model.h"
#include "quick_sort.h"
#include "bubble_sort.h"
#include "direct_insert_sort.h"
#include "half_insert_sort.h"
#include "shell_sort.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	const int n = 10;
	DemoDataModel *dataList = new DemoDataModel[n];
	int keyList[n] = {5,9,2,4,24,21,3,7,4,6};
	for (int i = 0; i < n; i++){
		dataList[i].sort_key = keyList[i];
	}
	cout << "排序前" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << dataList[i].sort_key << " ";
	}

	cout << endl;

	// 快速排序
	/*QuickSort sortMethod;
	sortMethod.Sort(dataList, 0, n-1);*/

	// 冒泡排序
	/*BubbleSort sortMethod;
	sortMethod.sort(dataList, n);*/

	// 直接插入排序
	/*DirectInsertSort sortMethod;
	sortMethod.sort_1(dataList, n);*/

	// 二分法插入排序
	//HalfInsertSort sortMethod;
	//sortMethod.sort(dataList, n);
	
	// shell排序
	ShellSort sortMethod;
	sortMethod.sort(dataList, n);
	
	

	cout << "排序后" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << dataList[i].sort_key << " ";
	}

	cin.get();
	
	return 0;
}

