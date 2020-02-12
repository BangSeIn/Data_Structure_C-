#pragma once
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

typedef int Data;

bool TF = false;

void BinarySearch(Data *Arr,int first, int last, Data search) {
	if (first > last) exit(-1);
	int mid = (first + last) / 2;
	if (Arr[mid] == search){ cout <<"["<<Arr[mid]<<"]"<< " was found : " << mid+1 <<" th Data "<< endl;
	TF = true;
	}

	else if (Arr[mid] > search) BinarySearch(Arr,first, mid - 1, search);
	else BinarySearch(Arr,mid + 1, last, search);
}

