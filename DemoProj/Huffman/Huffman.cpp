// Huffman.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "huffman_tree.h"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	int huffmanValues[13] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41 };
	HuffmanTree huffmanTree;
	BinTreeNode root = huffmanTree.huffman(13, huffmanValues);
	
	cin.get();

	return 0;
}

