#include "SingleList.h"




void SingleList::AddNode(int _data)
{
	SingleList();//헤드 테일 초기화

	Node* nd = new Node();//새로운 노드 생성 
	count++;//저장 갯수 세어줄 카운트 +1
	nd->next = nullptr;
	//새로 생긴 노드의 넥스트는 널포인터로 초기화
		
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
	//헤드는 첫 노드에 고정하고, 테일이 계속 끝 노드를 따라다닌다.

}