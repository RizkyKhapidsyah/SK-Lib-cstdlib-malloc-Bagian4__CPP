#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int main() {
	// alokasikan memori dengan ukuran int ke pointer int
	int* ptr = (int*)malloc(sizeof(int));

	// tetapkan nilai 5 ke memori yang dialokasikan
	*ptr = 5;

	cout << *ptr;

	_getch();
	return 0;
}