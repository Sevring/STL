#include "SingleList.h"

void SingleList::AddNode(int _data)
{
	

	Node* nd = new Node();//새로운 노드 생성 
	count++;//저장 갯수 세어줄 카운트 +1
	nd->next = nullptr;
	//새로 생긴 노드의 넥스트는 널포인터로 초기화
		
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
	//헤드는 첫 노드에 고정하고, 테일이 계속 끝 노드를 따라다닌다.

}

int SingleList::GetNodeData(int index)
{//index 3 = 
	if (index > count || index<1)
	{
		cout << "해당 노드는 존재하지 않습니다." << endl;
	}
	else
	{
		if (index == 1)
		{
			tmp = head; // 첫번째 노드임 
		}
		else if (index == 2)
		{
			tmp = head->next;//두번째 노드임 
		}
		else if (index >= 3)//이후 이어지는 노드를 반복해서 입력할 수 이씀
		{
			tmp = head->next;
			for (int i = 0; i < index - 2; i++)
			{
				tmp = tmp->next;
			}
		}
		//템찡에 헤드가 가리키는 노드의 넥스트가 가리키는 곳
		//즉, 두번째 노드를 가리키는 주소값을 넣음.
		//템찡이 가리키는 노드의 넥스트가 가리키는 곳
		//즉, 세번째 노드를 가리키는 주소값을 넣음. 
		cout << tmp->data << endl;//데이터 값 출력
	}
	
	return 0;
}