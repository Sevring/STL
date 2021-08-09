#pragma once
#include <iostream>
using namespace std;

struct Node // ���
{
	int data;
	Node* next;
};


class SingleList
{
private : 
	Node* head;//�׻� ù°�� ����ų ������
	int count; // ���� ������ ģ�� 

public :
	int data=0;
	Node* tail;
	Node* tmp;
	Node* tmp_ins;
	int index = 0;

public://�����ؾߵǴ� ���
	void AddNode(int data); //��� �߰��ϴ¾� - Ǫ��  
	void InsertNode(int index, int _data); //���߿� ��� ������ �� - �μ�Ʈ
	void UpdateNode(int index, int a);//��峢�� ������ �ٲ��� ��
	void DeleteData(int a); //����� ���� ������ �� 
	void DeleteIndex(int index);// ��带 �� �������� ��
	void ClearAll();//��� ��带 �� ���ֹ��� ��
	int GetNodeData(int index); //�ε��� �޾Ƽ� �ش� �ε���(����)�� �����Ͱ��� ������ ��
	int GetListSize(); //���� List�� ũ�� (�� ��ΰ�)




public:
	SingleList()//������ - Ŭ������ ������ �� Ŭ���� ���� ������ �ʱ�ȭ ��ų ���� 
		//��� ���� �����̺����� �ٷ� ���൵ ����� ���� ��
	{
		head = nullptr;// ������ ���� �ϴ� �������� ������� ����Ű���� �ʱ�ȭ��. 
		tail = nullptr;
		count = 0; // �ϴ� ī��Ʈ�� 0���� �ʱ�ȭ ��. 
	}
	~SingleList()//�Ҹ���, Ŭ������ ���� �� ����ȴ�.
	{
		if (head != nullptr)//��尡 ������Ʈ�� �ƴҶ� - �ѹ� ���� ������
		{
			Node* temp = head;  // ����� ������ ������ �������� ���� ���� ���� ����ŵ�ϴ�.
			                    // �ű�� �ٷ� �� ����������.
			Node* prev = nullptr;//������� �ϴ� �������͸� ����ŵ�ϴ�.
			while (temp != nullptr)//�׸��� �̰Ÿ� ���� �ݺ��ϴµ� ���������ϳĸ�, ������ ���������϶� ����
									//= �������ʹ� ���ڸ� �ؽ�Ʈ �̹Ƿ� ������ ���ٴ� �Ҹ� 
			{
				prev = temp; //�ϴ� ������ ������ �ּ������� ���� �־� �Ӵϴ�. 
				temp = temp->next; //�׸��� ������ �ؽ�Ʈ�� ����Ű�� ���� ����� �ּҰ��� ���ϴ�.
				delete prev; // ������ ����Ű�� ������ ��� ���� �Ҵ��������ݴϴ�. 
				// ���� �����Ҵ�� �ֵ��� = �̸��� �����Ƿ� ������ �ּҷ� �����ؼ� �Ҵ������ؾߵ�.

			}
			head = nullptr; // �ٵ� ��� ���� ? if�� �ٽ� �ݺ� �ȵǰ�? �Ҹ��ڰ� �۵����ϰ�?
		}


	}

};

