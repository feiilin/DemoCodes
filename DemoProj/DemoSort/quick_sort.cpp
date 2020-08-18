/********************************************
// ������QuickSort
// ������������������
// �����ˣ�feiilin
// ����ʱ�䣺2020.08.12
// ������
//******************************************/

#include "stdafx.h"
#include "quick_sort.h"

void QuickSort::sort(DemoDataModel *dataModel, int leftIndex, int rightIndex){
	if (leftIndex >= rightIndex || leftIndex < 0 || rightIndex < 0)
		return;
	// ��׼���յ�
	DemoDataModel base = dataModel[leftIndex];
	int i = leftIndex;
	int j = rightIndex;
	while (i != j)
	{
		// ��һ��ѭ�����Ӻ���ǰ�����ұ�baseС��ֵ
		while (i < j && dataModel[j].sort_key > base.sort_key)
			j--;
		// ��һ��ѭ��������ҵ�ֵ������λ��,��λ���˺󷽣���������ǰ����ʼ����
		if (i < j){
			dataModel[i++] = dataModel[j];
		}
		// �ڶ���ѭ������ǰ����ұ�base���ֵ
		while (i < j && dataModel[i].sort_key <= base.sort_key)
			i++;
		// �ڶ���ѭ��������ҵ�ֵ����������λ����ǰ�����������ִӺ󷽿�ʼ����
		if (i < j){
			dataModel[j--] = dataModel[i];
		}
	}
	dataModel[i] = base;
	// ��������������ͬ����������
	sort(dataModel, leftIndex, i - 1);
	// ���Ұ����������ͬ����������
	sort(dataModel, i + 1, rightIndex);
}

QuickSort::QuickSort()
{
}

QuickSort::~QuickSort()
{
}
