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

void SingleList::InsertNode(int index, int _data)
{
	count++;//��� ���� ������ ���� ī��Ʈ 1����
	Node* nd = new Node();// ����� ����
	if (index > count || index < 1) //�ε��� ���� ���� 
	{	
		cout << "�ش� �ڸ����� �űԳ�带 �ۼ��� �� �����ϴ�." << endl;
	}
	else
	{
		if (index == 1)
		{
			nd->data = _data;//�ϴ� ������ �Է� 
			nd->next = head;//�ű� ����� �ؽ�Ʈ�� ��带 ����Ű�� ��.
			head = nd;//���� �ű� ��带 ����Ű�� ��. 

		}
		else if (index == 2)
		{
			nd->data = _data;//�̴� ������ �Է�
			nd->next = head->next;//�ι�° ��带 ����Ű������.(����°�� �� ģ��)
			head->next = nd;//����� �ؽ�Ʈ�� �ű� ��带 ����Ű�� ��.

		}
		else if (index == 3)
		{//insert = 3 
			//tmp_ins = nd;//���μ�Ʈ�� ����带 ����Ű�� �س���(�űԳ�������)
			nd->data = _data;//��� ������ �Է� 
			tmp = head->next;//������ ���ؽ�Ʈ(�ι�° ���)�� ����Ű������.
			nd->next = tmp->next;
			tmp->next = nd;			
		}
		else if (index >= 4)
		{
			nd->data = _data;
			tmp = head->next;
		
			for (int i = 0; i < index - 4; i++)
			{
				tmp = tmp->next;//�������� ������ ����Ű�� �ؽ�Ʈ ���� �Է�
				 //�ݺ��Ǵ� Ƚ�� ��ŭ ������ ����Ű�� ��ġ�� �̵���. 
				//insert�� 3�̸� 1ȸ �ݺ��ؼ� ����° ����� 
			}	
			nd->next = tmp->next;
			tmp->next = nd;
		}
	}
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
		
		cout <<"�� : " << tmp->data << endl;//������ �� ���
	}
	
	return 0;
}