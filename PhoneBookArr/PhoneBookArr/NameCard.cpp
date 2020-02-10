#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"
using namespace std;


NameCard MakeCard(const char* name,const char* phone) {
	NameCard nc;
	strcpy(nc.name, name);
	strcpy(nc.phone, phone);
	return nc;
}

void PrintInfo(NameCard& nc) {
	cout << "Name : " << nc.name << "  ";
	cout << "Phone : " << nc.phone << endl;
}

int CompareName(NameCard& nc, const char* name) {
	return (!strcmp(nc.name, name));
}
NameCard EditPhone(NameCard& nc, const char* phone) {
	NameCard d;
	strcpy(d.name, nc.name);
	strcpy(d.phone, phone);
	return d;
};
