/********************************************
// 类名：HalfInsertSort
// 功能描述：二分法插入排序
// 创建人：feiilin
// 创建时间：2020.08.14
// 描述：
//******************************************/

#include "stdafx.h"
#include "half_insert_sort.h"
#include <iostream>
using namespace std;

void HalfInsertSort::sort(DemoDataModel *dataModel, int num)
{
	for (int i = 1; i < num; i++)
	{
		// 范围区间left ,right
		int left = 0;
		int right = i;
		// 范围基准点
		int lastCenter = 0;

		// 先计算出应该插入的位置[base, base + 1] or [base - 1 ,base]
		// 要么比基准点大，放在基准点右侧
		// 要么比基准点小，放在基准点左侧
		while (true)
		{
			if (i == 1)
				break;
			int center = (left + right) / 2;
			if (center == lastCenter)
				break;
			if (dataModel[i].sort_key < dataModel[center].sort_key)
			{
				right = center;
			}
			if (dataModel[i].sort_key >= dataModel[center].sort_key)
			{
				left = center;
			}
			lastCenter = center;
		}
		// 插在基准点之后
		if (dataModel[i].sort_key >= dataModel[lastCenter].sort_key)
		{
			DemoDataModel temp = dataModel[i];
			for (int k = i; k > lastCenter + 1; k--)
			{
				dataModel[k] = dataModel[k - 1];
			}

			dataModel[lastCenter + 1] = temp;
		}
		// 插在基准点之前
		else 
		{
			DemoDataModel temp = dataModel[i];
			for (int k = i; k > lastCenter; k--)
			{
				dataModel[k] = dataModel[k - 1];
			}
			dataModel[lastCenter] = temp;
		}
		/*
		for (int i = 0; i < num; i++)
		{
			cout << dataModel[i].sort_key << " ";
		}
		cout << endl;
*/

	}
}

HalfInsertSort::HalfInsertSort()
{
}


HalfInsertSort::~HalfInsertSort()
{
}
