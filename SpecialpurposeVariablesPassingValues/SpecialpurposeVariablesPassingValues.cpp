// This program demonstrates that change to a function parameter
// have no effect on the original argument

#include "stdafx.h"
#include <iostream>
using namespace std;

// Function prototype
void changeMe(int);

int main()
{
	int number = 12;

	// Display the value in number
	cout << "number is " << number << endl;

	// Call changeMe, passing the value in number as an argument
	changeMe(number);

	// Display the value in number again
	cout << "Now back in main again, the value of ";
	cout << "number is " << number << endl;
    return 0;
}

// This function changes the value of the parameter myValue

void changeMe(int myValue)
{
	// Change the value of myValue to 0
	myValue = 0;

	// Display the value in myValue
	cout << "Now th value is " << myValue << endl;
}

