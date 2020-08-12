// DemoSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "DemoDataModel.h"
#include "QuickSort.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	const int n = 10;
	DemoDataModel *dataList = new DemoDataModel[n];
	int keyList[n] = {5,9,2,4,24,21,3,7,4,6};
	for (int i = 0; i < n; i++){
		dataList[i].sortKey = keyList[i];
	}
	cout << "排序前" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << dataList[i].sortKey << " ";
	}

	cout << endl;




	QuickSort sortMethod;
	sortMethod.Sort(dataList, 0, n-1);

	cout << "排序后" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << dataList[i].sortKey << " ";
	}

	cin.get();
	
	return 0;
}

