#include "SingleList.h"



int main()
{
	SingleList* SL = new SingleList();

	int select = 0;
	do
	{
		cout << "Select Menu" << endl;
		cout << "1. AddNode	2. InsertNode	3. Display	999. Exit "<<endl;
		cin >> select; 
		switch (select)
		{
		case 1:
		{
			cout << "추가할 노드의 데이터(값)을 입력하세요" << endl;
			cin >> SL->data;
			SL->AddNode(SL->data);
		}
			break;
		case 2:
		{
			
		}
			break;
		case 3:
		{
			cout << "확인할 노드의 위치를 입력하세요" << endl;
			cin >> SL->index;
			SL->GetNodeData(SL->index);
		}
			break;

		default:
			break;
		}
	
	
	
	} while (select != 999);
	


}