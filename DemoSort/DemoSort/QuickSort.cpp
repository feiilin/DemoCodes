#include "stdafx.h"
#include "QuickSort.h"


void QuickSort::Sort(DemoDataModel *dataModel, int leftIndex, int rightIndex){
	if (leftIndex >= rightIndex || leftIndex < 0 || rightIndex < 0)
		return;

	// 基准参照点
	DemoDataModel base = dataModel[leftIndex];
	int i = leftIndex;
	int j = rightIndex;

	while (i != j)
	{
		// 第一重循环：从后向前遍历找比base小的值
		while (i < j && dataModel[j].sortKey > base.sortKey)
			j--;
		
		// 第一重循环解除，找到值，交换位置,空位到了后方，接下来从前方开始遍历
		if (i < j){
			dataModel[i++] = dataModel[j];
		}

		// 第二重循环：从前向后找比base大的值
		while (i < j && dataModel[i].sortKey <= base.sortKey)
			i++;

		// 第二重循环解除，找到值，交换，空位到了前方，接下来又从后方开始遍历
		if (i < j){
			dataModel[j--] = dataModel[i];
		}
	}

	dataModel[i] = base;

	// 对左半区间进行相同方法的排序
	Sort(dataModel, leftIndex, i - 1);

	// 对右半区间进行相同方法的排序
	Sort(dataModel, i + 1, rightIndex);
}

QuickSort::QuickSort()
{
}

QuickSort::~QuickSort()
{
}
