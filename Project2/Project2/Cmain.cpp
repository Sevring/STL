#include "SingleList.h"



int main()
{
	SingleList* SL;
	int select = 0;
	
	{
		cout << "Select Menu" << endl;
		cout << "1. AddNode	2. InsertNode	3. Display	999. Exit "<<endl;
		cin >> select; 
		if (select == 1)
		{
			cout << "�߰��� ����� ������(��)�� �Է��ϼ���" << endl;
			cin >> SL->data;
			SL->AddNode(SL->data);
		}
		if (select == 2)
		{
			cout << "�߰��� ����� ��ġ�� ������(��)�� �Է��ϼ���" << endl;
			cin >> ;
		}



	} while (a == 999);



}