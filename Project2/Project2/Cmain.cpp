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
			cout << "�߰��� ����� ������(��)�� �Է��ϼ���" << endl;
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
			cout << "Ȯ���� ����� ��ġ�� �Է��ϼ���" << endl;
			cin >> SL->index;
			SL->GetNodeData(SL->index);
		}
			break;

		default:
			break;
		}
	
	
	
	} while (select != 999);
	


}