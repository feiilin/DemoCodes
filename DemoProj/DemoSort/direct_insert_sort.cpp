/********************************************
// 类名：DirectInsertSort
// 功能描述：直接插入排序
// 创建人：feiilin
// 创建时间：2020.08.12
// 描述：sort_1比sort方法更加简明一些
//******************************************/

#include "stdafx.h"
#include "direct_insert_sort.h"
#include <iostream>
using namespace std;

/**
	本函数先找插入位置再进行实际插入移位
*/
void DirectInsertSort::sort(DemoDataModel *dataModel,int num)
{
	// 从1开始，逐次与之前的数据进行比对，找出应该插入的位置
	for (int i = 1; i < num; i++)
	{
		// 与前面的每项进行比对
		for (int j = i - 1; j >= 0; j--)
		{
			// 如果发现i的值比前面的某个j的值要小
			if (dataModel[i].sort_key <= dataModel[j].sort_key)
			{
				// 判断一下是不是比对到首位了，如果是首位，则不需要比对首位前面的项了
				// 如果不是首位，则需要同时比对前项，只有 【j - 1项<i项<j项】 才能确定将i项插入到j项的位置，并将 【j项】~ 【i - 1项】 后移一位
				if (j == 0 || dataModel[i].sort_key >= dataModel[j - 1].sort_key){
					DemoDataModel temp = dataModel[i];
					// 这里一定要注意要倒序迁移！
					for (int k = i; k >= j + 1; k--)
					{
						dataModel[k] = dataModel[k - 1];
					}
					dataModel[j] = temp;
				}
			}
		}
	}
}

/**
	此函数通过固定次数的比较不断进行判断是否需要将i位置的值（待比较项）向前移动一格
*/
void DirectInsertSort::sort_1(DemoDataModel *dataModel, int num)
{
	for (int i = 1; i < num; i++)
	{
		int j;
		DemoDataModel temp = dataModel[i];
		for (j = i - 1; j >= 0 && temp.sort_key < dataModel[j].sort_key; j--)
		{
			dataModel[j + 1] = dataModel[j];
			dataModel[j] = temp;
		}
	}
}



DirectInsertSort::DirectInsertSort()
{
}

DirectInsertSort::~DirectInsertSort()
{
}
