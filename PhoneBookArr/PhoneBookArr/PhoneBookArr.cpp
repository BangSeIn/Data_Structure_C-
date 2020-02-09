#include <iostream>
#include "ArrList.h"
using namespace std;

int main() {

	List list;
	int data;
	Init(&list);

	//Insert Data into List
	Insert(&list, 1);
	Insert(&list, 2);
	Insert(&list, 3);
	Insert(&list, 4);
	Insert(&list, 5);

	//Show all of inserted datas
	cout << " Number of Data is Now : " << SizeOfList(&list) << endl;

	if (First(&list, &data)) { //Refer the first one
		cout << data << "  ";

		while (Next(&list, &data)) //Refer all after the first
		cout << data <<"  ";
	}
	cout << endl;

	//Search one data and Delete all same things in List
	if (First(&list, &data)) {
		if (data == 3)
			Remove(&list);

		while (Next(&list, &data))
		{	if (data == 3)
				Remove(&list);
	    }
	}

	cout << " Number of Data is Now : " << SizeOfList(&list) << endl;

	if (First(&list, &data)) { //Refer the first one
		cout << data << "  ";

		while (Next(&list, &data)) //Refer all after the first
			cout << data << "  ";
	}
	cout << endl;

	return 0;
}