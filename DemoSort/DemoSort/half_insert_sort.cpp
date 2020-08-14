/********************************************
// ������HalfInsertSort
// �������������ַ���������
// �����ˣ�feiilin
// ����ʱ�䣺2020.08.14
// ������
//******************************************/

#include "stdafx.h"
#include "half_insert_sort.h"
#include <iostream>
using namespace std;

void HalfInsertSort::sort(DemoDataModel *dataModel, int num)
{
	for (int i = 1; i < num; i++)
	{
		// ��Χ����left ,right
		int left = 0;
		int right = i;
		// ��Χ��׼��
		int lastCenter = 0;

		// �ȼ����Ӧ�ò����λ��[base, base + 1] or [base - 1 ,base]
		// Ҫô�Ȼ�׼��󣬷��ڻ�׼���Ҳ�
		// Ҫô�Ȼ�׼��С�����ڻ�׼�����
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
		// ���ڻ�׼��֮��
		if (dataModel[i].sort_key >= dataModel[lastCenter].sort_key)
		{
			DemoDataModel temp = dataModel[i];
			for (int k = i; k > lastCenter + 1; k--)
			{
				dataModel[k] = dataModel[k - 1];
			}

			dataModel[lastCenter + 1] = temp;
		}
		// ���ڻ�׼��֮ǰ
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
