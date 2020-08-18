#include "stdafx.h"
#include "huffman_tree.h"
#include <limits.h>
#include <iostream>

using namespace std;


BinTreeNode HuffmanTree::huffman(int num, int *value)
{
	// 构造数组
	BinTreeNode *binTreeNodes = new BinTreeNode[2 * num - 1];
	// 数组前段初始化
	for (int i = 0; i < num; i++)
	{
		BinTreeNode node;
		node.value = value[i];
		node.parent = -1;
		node.left = -1;
		node.right = -1;
		binTreeNodes[i] = node;
	}
	// 构造数组后段
	for (int i = num; i < 2 * num - 1; i++)
	{
		BinTreeNode node;
		node.left = -1;
		node.parent = -1;
		node.right = -1;
	
		int min = INT_MAX;
		int min_index = 0;
		int subMin = INT_MAX;
		int subMin_index = 0;
		// 从前i个数中找出最小的两个数作为构造的左右节点
		for (int j = 0; j < i; j++)
		{
			if (binTreeNodes[j].parent == -1)
			{
				// 最小值
				if (binTreeNodes[j].value < min)
				{
					// 将原先的最小值设置为次小值
					subMin = min;
					subMin_index = min_index;
					// 将最新的最小值设定好
					min_index = j;
					min = binTreeNodes[j].value;
				}
				// 次最小值
				else if (binTreeNodes[j].value < subMin)
				{
					subMin_index = j;
					subMin = binTreeNodes[j].value;
				}
			}
		}
		
		node.left = min_index;
		node.right = subMin_index;
		node.value = min + subMin;

		binTreeNodes[node.left].parent = i;
		binTreeNodes[node.right].parent = i;

		binTreeNodes[i] = node;
	}

	for (int i = 0; i < 2 * num - 1; i++)
	{
		cout << binTreeNodes[i].value << " ";
	}
	cout << endl;

	return binTreeNodes[2 * num - 2];


}

HuffmanTree::HuffmanTree()
{
}


HuffmanTree::~HuffmanTree()
{
}
