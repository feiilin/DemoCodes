/********************************************
// ������BubbleSort
// ����������ð������
// �����ˣ�feiilin
// ����ʱ�䣺2020.08.12
// ������
//******************************************/

#include "stdafx.h"
#include "bubble_sort.h"

void BubbleSort::sort(DemoDataModel *dataModel, int num){
	DemoDataModel temp;
	// ð������һ����Ҫִ��n-1��
	int loopCnt = num - 1;
	while (loopCnt >= 0)
	{
		// ������0��loopCnt - 1������Ժ�һλ��ֵ���бȽϣ������һλС��ǰһλ�ͽ���ֵ
		// �Ӷ��ҵ������е����ֵ�������ƶ�����ĩβ
		for (int i = 0; i < loopCnt; i++)
		{
			if (dataModel[i].sort_key > dataModel[i + 1].sort_key){
				temp = dataModel[i];
				dataModel[i] = dataModel[i + 1];
				dataModel[i + 1] = temp;
			}
		}

		// ������һ��
		loopCnt -= 1;
	}
	

}

BubbleSort::BubbleSort()
{
}


BubbleSort::~BubbleSort()
{
}
