#include <iostream>
#include <stdlib.h>
#include "ArrList.h"
using namespace std;

void Init(List& li) //Initiate 
{

	(li.NumData) = 0;
	(li.CurrentIndex) = -1;

}
void Insert(List& li, ListData ld) //Insert new Data
{
	if (li.NumData >= ListSize) {
		cout << "Unable INSERT" << endl;
		return;
	}
	//else
	li.arr[li.NumData] = ld;
	(li.NumData)++;

}

int First(List& li, ListData& ld) //Reference First Data
{
	if (li.NumData == 0) {
		return FALSE;//List is empty
	}

	(li.CurrentIndex) = 0;
	ld = li.arr[0];
	return TRUE;
}
int Next(List& li, ListData& ld) //Refer all Datas After Second
{
	if (li.CurrentIndex >= (li.NumData) - 1)
		return FALSE; // All elements are refered.
	//else
	(li.CurrentIndex)++;
	ld = li.arr[li.CurrentIndex];
	return TRUE;
}

void Set(List& li, ListData& ld) {
	ld = li.arr[li.CurrentIndex];
};

ListData Remove(List& li) {
	int pos = li.CurrentIndex;
	int num = li.NumData;

	ListData data = li.arr[pos];

	for (int i = pos; i < num - 1; i++) {
		li.arr[i] = li.arr[i + 1];
	}

	(li.NumData)--;
	(li.CurrentIndex)--;
	return data;
}
int SizeOfList(List& li) {
	return li.NumData;
}