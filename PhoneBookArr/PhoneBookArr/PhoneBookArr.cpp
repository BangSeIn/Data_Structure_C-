#include <iostream>
#include "ArrList.h"
using namespace std;

int main() {

	List list;
	Init(list);
	NameCard nc,namecard;
	
	nc = MakeCard("BangSeIn", "010-0000-0001");
	Insert(list, nc);
	nc = MakeCard("KimChulSu", "010-0000-0010");
	Insert(list, nc);
	nc = MakeCard("LeeYoungSu", "010-0000-0100");
	Insert(list, nc);

	if (First(list, namecard))
		PrintInfo(namecard);
	while (Next(list, namecard)) {
		PrintInfo(namecard);
	}
	cout << endl;
	
	//Search "BangSeIn" NameCard and Delete
	cout << "Remove Sein Bang's Information\n\n";
	if (First(list, namecard))
	{
		if (CompareName(namecard, "BangSeIn"))
			Remove(list);
	}
	while (Next(list, namecard)) {
		if (CompareName(namecard, "BangSeIn"))
			Remove(list);
	}

	if (First(list, namecard))
		PrintInfo(namecard);
	while (Next(list, namecard)) {
		PrintInfo(namecard);
	}
	cout << endl;
	//Change "KimChulSu"'s phone ------Could not implemented Yet
	cout << "Change Chulsu Kim's Information\n\n";
	if (First(list, namecard))
	{
		if (CompareName(namecard, "KimChulSu"))
		{
			NameCard p = EditPhone(namecard, "010-9999-9999");
			Set(list, p);
		}

	}
	while (Next(list, namecard)) {
		if (CompareName(namecard, "KimChulSu")) {
			NameCard p = EditPhone(namecard, "010-9999-9999");
			Set(list, p);
	}
	}

	if (First(list, namecard))
		PrintInfo(namecard);
	while (Next(list, namecard)) {
		PrintInfo(namecard);
	}
	cout << endl;
	return 0;
}