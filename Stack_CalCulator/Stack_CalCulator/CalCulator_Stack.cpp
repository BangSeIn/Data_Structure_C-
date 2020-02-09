//Calculator Reads Prefix noatation, Shows Postfix notation & answer
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Stack.h"
using namespace std;


int main() {
	//Print Postfix notation
	Stack s;
	s.top = NULL;
	int size = 0;
	char c[100] = "";
	cout << "--------Postfix Calculator------\n\n";
	cout << "Input the Prefix notation (Blank must be typed between each single elements)\n-> ";
	for (int i = 0; i < 100; i++) {
		cin.get(c[i]);
		if (c[i] == '=' || c[i] == '\n') {
			c[i] = '\0'; break;
		}
	}


	for (int i = 0; i < strlen(c); i++)
	{
		if (c[i] == ' ') size++;
	}
	char* str = strtok(c, " ");
	char** input = new char* [100];
	for (int i = 0; i < size; i++) {
		input[i] = new char[100];
	}
	for (int i = 0; i < size; i++) {

		strcpy(input[i], str);
		str = strtok(NULL, " ");
	}
	char post[1000] = "";
	strcpy(post, postfix(&s, input, size));
	printf("Postfix : %s\n", post);


	//Print the calculated result
	size = 1;
	for (int i = 0; i < strlen(post) - 1; i++) {//char[]'s last index value must be '\0',so subtract 1
		if (post[i] == ' ')size++;
	}
	char* str2 = strtok(post, " ");
	for (int i = 0; i < size; i++) {
		strcpy(input[i], str2);
		str2 = strtok(NULL, " ");
	}
	Calculate(&s, input, size);

	return 0;
}