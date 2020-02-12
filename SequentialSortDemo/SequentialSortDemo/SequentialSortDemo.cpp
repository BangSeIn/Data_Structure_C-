#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <string>
#define SIZE 1000
using namespace std;
string *Arr;

int main()
{
	int size,TF = 0;
	string search;
	cout << "Set the Size of Array : ";
	cin >> size;
	Arr = new string[size];
	cout << "\nSet the each datas of Array \n";
	for (int i = 0; i < size; i++) {
		cin >> Arr[i];
	}
	cout << "\nType the data to serach : ";
	cin >> search;
	for (int i = 0; i < size; i++) {
		if (Arr[i] == search) {
			cout <<"\n"<< Arr[i] << " was found : " << i + 1 << "th word ";
			cout << endl;
			TF = 1;
		}
	}
	if (TF == 0) cout << "Not Found" << endl;
}
