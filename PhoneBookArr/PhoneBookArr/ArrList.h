#pragma once
#ifndef ARR_LIST_H
#define ARR_LIST_H
#include "NameCard.h"
#define TRUE		1
#define FALSE	0

#define ListSize		100
typedef	NameCard ListData;

struct List {
	ListData arr[ListSize];
	int NumData;
	int CurrentIndex;
};


void Init(List& li); //Initiate
void Insert(List& li, ListData ld); //Insert new Data

int First(List& li, ListData& ld); //Refer to First Data
int Next(List& li, ListData& ld); //Refer to all Datas After Second
void Set(List& li, ListData& ld);

ListData Remove(List& li);
int SizeOfList(List& li);

#endif