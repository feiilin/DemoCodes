#pragma once

// 二叉树节点数据类型
// 由于使用了数组存放了所有的数据
// 所以这里不需要使用指针来存放左右子节点和父节点，直接存放他们的index即可
struct BinTreeNode
{
	// 左子节点
	int left;
	// 右子节点
	int right;
	// 父节点
	int parent;
	// 节点值
	int value;
};

class HuffmanTree
{
public:
	
	BinTreeNode huffman(int num, int *value);
	HuffmanTree();
	~HuffmanTree();
};



