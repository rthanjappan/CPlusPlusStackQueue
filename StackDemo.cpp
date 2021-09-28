// Program : Static Stack Template Demo
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
#include "StackDemo.h"
using namespace std;
//static stack demo with integer values
void StackDemo::intMainLine() {
	int size;
	cout << "How big should I make the stack? ";
	cin >> size;
	while (size < 1) {
		cout << "enter 1 or greater : ";
		cin >> size;
	}
	
	Stack<int> intStack(size);

	cout << "Entering data to stack with integers(-1 to quit)" << endl;
	int value = 0,i=0;
	cout << "Please enter  the integer #" << ++i << " : ";
	cin >> value;
	while (value != -1 && !intStack.isFull()) {
		
		intStack.push(value);
		if (intStack.isFull()) {
			cout << "\nThe stack is full." << endl;
			break;
		}
		cout << "Please enter  the integer #" << ++i << " : ";
		cin >> value;
	}
	cout << "Getting data from the stack with integers" << endl;
	value = 0, i = 0;
	while (!intStack.isEmpty()) {
		intStack.pop(value);
		cout << "\nThe integer #" << ++i << " : "<<value;
		
	}
}
//static stack demo with double values
void StackDemo::doubleMainLine() {
	int size;
	cout << "How big should I make the stack? ";
	cin >> size;
	while (size < 1) {
		cout << "enter 1 or greater : ";
		cin >> size;
	}
	
	Stack<double> doubleStack(size);

	cout << "Entering data to stack with double values(-1 to quit)" << endl;
	double value = 0;int i = 0;
	cout << "Please enter  the double value #" << ++i << " : ";
	cin >> value;
	while (value != -1 && !doubleStack.isFull()) {

		doubleStack.push(value);
		if (doubleStack.isFull()) {
			cout << "\nThe stack is full." << endl;
			break;
		}
		cout << "Please enter  the double value #" << ++i << " : ";
		cin >> value;
	}
	cout << "Getting data from the stack with double values" << endl;
	value = 0, i = 0;
	while (!doubleStack.isEmpty()) {
		doubleStack.pop(value);
		cout << "\nThe double value #" << ++i << " : " << value;

	}
}