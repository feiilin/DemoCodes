#pragma once

// �������ڵ���������
// ����ʹ���������������е�����
// �������ﲻ��Ҫʹ��ָ������������ӽڵ�͸��ڵ㣬ֱ�Ӵ�����ǵ�index����
struct BinTreeNode
{
	// ���ӽڵ�
	int left;
	// ���ӽڵ�
	int right;
	// ���ڵ�
	int parent;
	// �ڵ�ֵ
	int value;
};

class HuffmanTree
{
public:
	
	BinTreeNode huffman(int num, int *value);
	HuffmanTree();
	~HuffmanTree();
};



