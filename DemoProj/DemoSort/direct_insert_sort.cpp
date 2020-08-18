/********************************************
// ������DirectInsertSort
// ����������ֱ�Ӳ�������
// �����ˣ�feiilin
// ����ʱ�䣺2020.08.12
// ������sort_1��sort�������Ӽ���һЩ
//******************************************/

#include "stdafx.h"
#include "direct_insert_sort.h"
#include <iostream>
using namespace std;

/**
	���������Ҳ���λ���ٽ���ʵ�ʲ�����λ
*/
void DirectInsertSort::sort(DemoDataModel *dataModel,int num)
{
	// ��1��ʼ�������֮ǰ�����ݽ��бȶԣ��ҳ�Ӧ�ò����λ��
	for (int i = 1; i < num; i++)
	{
		// ��ǰ���ÿ����бȶ�
		for (int j = i - 1; j >= 0; j--)
		{
			// �������i��ֵ��ǰ���ĳ��j��ֵҪС
			if (dataModel[i].sort_key <= dataModel[j].sort_key)
			{
				// �ж�һ���ǲ��ǱȶԵ���λ�ˣ��������λ������Ҫ�ȶ���λǰ�������
				// ���������λ������Ҫͬʱ�ȶ�ǰ�ֻ�� ��j - 1��<i��<j� ����ȷ����i����뵽j���λ�ã����� ��j�~ ��i - 1� ����һλ
				if (j == 0 || dataModel[i].sort_key >= dataModel[j - 1].sort_key){
					DemoDataModel temp = dataModel[i];
					// ����һ��Ҫע��Ҫ����Ǩ�ƣ�
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
	�˺���ͨ���̶������ıȽϲ��Ͻ����ж��Ƿ���Ҫ��iλ�õ�ֵ�����Ƚ����ǰ�ƶ�һ��
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
