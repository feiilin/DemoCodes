#include "stdafx.h"
#include "shell_sort.h"

void ShellSort::sort(DemoDataModel *dataModel, int num)
{
	// 初始增量
	int step = num / 2;
	// 执行轮次
	for (int i = step; i >= 1; i /= 2)
	{
		// 从每个步长开始向后看
		for (int j = i; j < num; j++)
		{
			DemoDataModel temp = dataModel[j];
			int k;
			
			for (k = j - i; k >= 0 && temp.sort_key < dataModel[k].sort_key; k -= i)
			{
				dataModel[k + i] = dataModel[k];
				dataModel[k] = temp;
			}
		}
	}
}

ShellSort::ShellSort()
{
}


ShellSort::~ShellSort()
{
}
