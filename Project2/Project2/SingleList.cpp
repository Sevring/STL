#include "SingleList.h"

void SingleList::AddNode(int _data)
{
	

	Node* nd = new Node();//���ο� ��� ���� 
	count++;//���� ���� ������ ī��Ʈ +1
	nd->next = nullptr;
	//���� ���� ����� �ؽ�Ʈ�� �������ͷ� �ʱ�ȭ
		
	if (head == nullptr)
	{
		head = nd;
		tail = nd;		
		head->data = _data;
	}
	else if(head != nullptr)
	{
		tail->next = nd;
		tail = nd;	
		tail->data = _data;
	}
	//���� ù ��忡 �����ϰ�, ������ ��� �� ��带 ����ٴѴ�.

}

int SingleList::GetNodeData(int index)
{//index 3 = 
	if (index > count || index<1)
	{
		cout << "�ش� ���� �������� �ʽ��ϴ�." << endl;
	}
	else
	{
		if (index == 1)
		{
			tmp = head; // ù��° ����� 
		}
		else if (index == 2)
		{
			tmp = head->next;//�ι�° ����� 
		}
		else if (index >= 3)//���� �̾����� ��带 �ݺ��ؼ� �Է��� �� �̾�
		{
			tmp = head->next;
			for (int i = 0; i < index - 2; i++)
			{
				tmp = tmp->next;
			}
		}
		//������ ��尡 ����Ű�� ����� �ؽ�Ʈ�� ����Ű�� ��
		//��, �ι�° ��带 ����Ű�� �ּҰ��� ����.
		//������ ����Ű�� ����� �ؽ�Ʈ�� ����Ű�� ��
		//��, ����° ��带 ����Ű�� �ּҰ��� ����. 
		cout << tmp->data << endl;//������ �� ���
	}
	
	return 0;
}