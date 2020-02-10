#pragma once
#ifndef NAME_CARD_H
#define NAME_CARD_H

#define N_LEN 30
#define P_LEN 100

struct NameCard {
public:
	char name[N_LEN];
	char phone[P_LEN];
	
};

NameCard MakeCard(const char* name, const char* phone);
void PrintInfo(NameCard& nc);
int CompareName(NameCard& nc, const char* name);
NameCard EditPhone(NameCard& nc, const char* phone);

#endif // !NAME_CARD_H



/*
*/