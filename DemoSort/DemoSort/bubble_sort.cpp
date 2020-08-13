/********************************************
// 类名：BubbleSort
// 功能描述：冒泡排序
// 创建人：feiilin
// 创建时间：2020.08.12
// 描述：
//******************************************/

#include "stdafx.h"
#include "bubble_sort.h"

void BubbleSort::sort(DemoDataModel *dataModel, int num){
	DemoDataModel temp;
	// 冒泡排序一共需要执行n-1轮
	int loopCnt = num - 1;
	while (loopCnt >= 0)
	{
		// 遍历从0到loopCnt - 1与其各自后一位的值进行比较，如果后一位小于前一位就交换值
		// 从而找到本轮中的最大值，将其移动到最末尾
		for (int i = 0; i < loopCnt; i++)
		{
			if (dataModel[i].sort_key > dataModel[i + 1].sort_key){
				temp = dataModel[i];
				dataModel[i] = dataModel[i + 1];
				dataModel[i + 1] = temp;
			}
		}

		// 进行下一轮
		loopCnt -= 1;
	}
	

}

BubbleSort::BubbleSort()
{
}


BubbleSort::~BubbleSort()
{
}
