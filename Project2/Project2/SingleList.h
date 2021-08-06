#pragma once
#include <iostream>
using namespace std;

struct Node // 노드
{
	int data;
	Node* next;
};


class SingleList
{
private : 
	Node* head;//항상 첫째를 가리킬 포인터
	int count; // 갯수 세어줄 친구 

public :
	int data;
	Node* tail;

public://구현해야되는 기능
	void AddNode(int data); //노드 추가하는애 - 푸시  
	void insertNode(int index, int a); //도중에 노드 끼워줄 애 - 인설트
	void UpdateNode(int index, int a);//노드끼리 데이터 바꿔줄 애
	void DeleteData(int a); //노드의 값만 지워줄 애 
	void DeleteIndex(int index);// 노드를 쏙 제거해줄 애
	void ClearAll();//모든 노드를 다 없애버릴 애
	int GetNodeData(int index); //인덱스 받아서 해당 인덱스(순서)의 데이터값을 보여줄 애
	int GetListSize(); //현재 List의 크기 (총 몇개인가)




public:
	SingleList()//생성자 - 클래스를 정의할 때 클래스 내의 변수를 초기화 시킬 것임 
		//사실 위에 프라이빗에서 바로 해줘도 상관은 없음 ㅎ
	{
		head = nullptr;// 포인터 헤드는 일단 널포인터 빈공간을 가리키도록 초기화함. 
		tail = nullptr;
		count = 0; // 일단 카운트는 0으로 초기화 함. 
	}
	~SingleList()//소멸자, 클래스가 끝날 때 실행된다.
	{
		if (head != nullptr)//헤드가 널포인트가 아닐때 - 한번 실행 됬을때
		{
			Node* temp = head;  // 노드형 포인터 템프는 이제부터 헤드와 같은 곳을 가리킵니다.
			                    // 거기는 바로 널 포인터지요.
			Node* prev = nullptr;//프리비는 일단 널포인터를 가리킵니당.
			while (temp != nullptr)//그리고 이거를 이제 반복하는데 언제까지하냐면, 템프가 널포인터일때 까지
									//= 널포인터는 끝자리 넥스트 이므로 끝까지 간다는 소리 
			{
				prev = temp; //일단 프리비에 템프의 주소포인터 값을 넣어 둡니다. 
				temp = temp->next; //그리고 템프는 넥스트가 가리키는 다음 노드의 주소값이 들어감니다.
				delete prev; // 프리비가 가리키던 이전의 노드 값은 할당해제해줍니다. 
				// 노드는 동적할당된 애들임 = 이름이 없으므로 저렇게 주소로 접근해서 할당해제해야됨.

			}
			head = nullptr; // 근데 얘는 왜함 ? if가 다시 반복 안되게? 소멸자가 작동안하게?
		}


	}

};

