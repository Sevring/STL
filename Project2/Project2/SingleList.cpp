#include "SingleList.h"




void SingleList::AddNode(int _data)
{
	SingleList();//��� ���� �ʱ�ȭ

	Node* nd = new Node();//���ο� ��� ���� 
	count++;//���� ���� ������ ī��Ʈ +1
	nd->next = nullptr;
	//���� ���� ����� �ؽ�Ʈ�� �������ͷ� �ʱ�ȭ
		
	if (head == nullptr)
	{
		head = nd;
		tail = nd;		
	}
	else if(head != nullptr)
	{
		tail->next = nd;
		tail = nd;	
		
	}
	//���� ù ��忡 �����ϰ�, ������ ��� �� ��带 ����ٴѴ�.

}