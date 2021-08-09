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

void SingleList::InsertNode(int index, int _data)
{
	count++;//노드 길이 측정을 위한 카운트 1증가
	Node* nd = new Node();// 뉴노드 생성
	if (index > count || index < 1) //인덱스 오류 점검 
	{	
		cout << "해당 자리에는 신규노드를 작성할 수 없습니다." << endl;
	}
	else
	{
		if (index == 1)
		{
			nd->data = _data;//일단 데이터 입력 
			nd->next = head;//신규 노드의 넥스트가 헤드를 가리키게 함.
			head = nd;//헤드는 신규 노드를 가리키게 함. 

		}
		else if (index == 2)
		{
			nd->data = _data;//이단 데이터 입력
			nd->next = head->next;//두번째 노드를 가리키도록함.(세번째가 될 친구)
			head->next = nd;//헤드의 넥스트가 신규 노드를 가리키게 함.

		}
		else if (index == 3)
		{//insert = 3 
			//tmp_ins = nd;//템인설트가 뉴노드를 가리키게 해놓음(신규노드저장용)
			nd->data = _data;//삼단 데이터 입력 
			tmp = head->next;//템프에 헤드넥스트(두번째 노드)를 가리키도록함.
			nd->next = tmp->next;
			tmp->next = nd;			
		}
		else if (index >= 4)
		{
			nd->data = _data;
			tmp = head->next;
		
			for (int i = 0; i < index - 4; i++)
			{
				tmp = tmp->next;//템프에는 템프가 가리키는 넥스트 값을 입력
				 //반복되는 횟수 만큼 템프가 가리키는 위치가 이동함. 
				//insert가 3이면 1회 반복해서 세번째 노드의 
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
		
		cout <<"퉷 : " << tmp->data << endl;//데이터 값 출력
	}
	
	return 0;
}