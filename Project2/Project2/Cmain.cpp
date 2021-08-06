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
			cout << "추가할 노드의 데이터(값)을 입력하세요" << endl;
			cin >> SL->data;
			SL->AddNode(SL->data);
		}
		if (select == 2)
		{
			cout << "추가할 노드의 위치와 데이터(값)을 입력하세요" << endl;
			cin >> ;
		}



	} while (a == 999);



}