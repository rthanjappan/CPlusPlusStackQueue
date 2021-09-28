// Program : Dynamic Stack Template Demo
//Programmer : Rosemol Thanjappan
//Date : 3/12/2019
#include <conio.h>
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
#include "Stack.h"
#include"Inventory.h"
#include "DynamicStackDemo.h"
#include "DynamicStack.h"
using namespace std;
//dynamic stack with integer values Demo mainLine
void DynamicStackDemo::intMainLine() {
	int size;
	
	DynamicStack<int> intStack;

	cout << "Entering data to dynamic stack with integers(-1 to quit)" << endl;
	int value = 0, i = 0;
	cout << "Please enter  the integer #" << ++i << " : ";
	cin >> value;
	while (value != -1 ) {

		intStack.push(value);
		cout << "Please enter  the integer #" << ++i << " : ";
		cin >> value;
	}

	cout << "Getting data from the dynamic stack with integers" << endl;
	value = 0, i = 0;
	while (!intStack.isEmpty()) {
		intStack.pop(value);
		cout << "\nThe integer #" << ++i << " : " << value;

	}
}
//dynamic stack with double values Demo mainLine
void DynamicStackDemo::doubleMainLine() {
	
	DynamicStack<double> doubleStack;

	cout << "Entering data to dynamic stack with double values(-1 to quit)" << endl;
	double value = 0; int i = 0;
	cout << "Please enter  the double value #" << ++i << " : ";
	cin >> value;
	while (value != -1 ) {

		doubleStack.push(value);
		cout << "Please enter  the double value #" << ++i << " : ";
		cin >> value;
	}
	cout << "Getting data from the dynamic stack with double" << endl;
	value = 0, i = 0;
	while (!doubleStack.isEmpty()) {
		doubleStack.pop(value);
		cout << "\nThe double value #" << ++i << " : " << value;

	}
}