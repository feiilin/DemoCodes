#pragma once
class DemoDataLinkModel
{
public:
	int sort_key;
	int data;
	// ����ڵ�
	DemoDataLinkModel *next;

	DemoDataLinkModel();
	~DemoDataLinkModel();
};

