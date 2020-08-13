#include "stdafx.h"
#include "direct_insert_sort.h"
#include <iostream>
using namespace std;

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

DirectInsertSort::DirectInsertSort()
{
}


DirectInsertSort::~DirectInsertSort()
{
}
