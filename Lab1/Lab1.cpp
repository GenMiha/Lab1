// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <iostream>
/*Function, that counts position*/
char SymbolFind(int k) {

	int cursize = 0;
	for (int i = 1; true; i++) {
		static int number = 10;
		char buffer[11];
		_itoa_s(number, buffer, 11, 10);
		int numlen = strlen(buffer);
		cursize += numlen;
		if (k <= cursize) {
			int pos = numlen - (cursize - k) - 1;
			return buffer[pos];
		}
		number++;
	}
}




int main()
{
	float position;
	int check;
	printf("Enter the digit position, u want to know: ");
	check = scanf_s("%f", &position);
	float res = position - (int)position;
	char c = getchar();
	if (res != 0 || check != 1 || position <= 0 || position > 180 || c != '\n') {
		printf("Invalid input!");
		return -1;
	}
	printf("%d digit is: %c", (int)position, SymbolFind(position));
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
