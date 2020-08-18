#include "stdafx.h"
#include "shell_sort.h"

void ShellSort::sort(DemoDataModel *dataModel, int num)
{
	// ��ʼ����
	int step = num / 2;
	// ִ���ִ�
	for (int i = step; i >= 1; i /= 2)
	{
		// ��ÿ��������ʼ���
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
