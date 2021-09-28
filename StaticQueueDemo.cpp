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
#include "StaticQueueDemo.h"
using namespace std;

void StaticQueueDemo::intMainLine() {
	int size;
	cout << "How big should I make the queue? ";
	cin >> size;
	while (size < 1) {
		cout << "enter 1 or greater : ";
		cin >> size;
	}
	//Stack<int> tempStack(size);
	StaticQueue<int> intQueue(size);

	cout << "Entering data to static queue with integers(-1 to quit)" << endl;
	int value = 0, i = 0;
	cout << "Please enter  the integer #" << ++i << " : ";
	cin >> value;
	while (value != -1 && !intQueue.isFull()) {

		intQueue.enqueue(value);
		if (intQueue.isFull()) {
			cout << "\nThe queue is full." << endl;
			break;
		}
		cout << "Please enter  the integer #" << ++i << " : ";
		cin >> value;
	}
	cout << "Getting data from the static queue with integers" << endl;
	value = 0, i = 0;
	while (!intQueue.isEmpty()) {
		intQueue.dequeue(value);
		cout << "\nThe integer #" << ++i << " : " << value;

	}
}
void StaticQueueDemo::doubleMainLine() {
	int size;
	cout << "How big should I make the queue? ";
	cin >> size;
	while (size < 1) {
		cout << "enter 1 or greater : ";
		cin >> size;
	}
	
	StaticQueue<double> doubleQueue(size);

	cout << "Entering data to static queue with double values(-1 to quit)" << endl;
	double value = 0; int i = 0;
	cout << "Please enter  the double value #" << ++i << " : ";
	cin >> value;
	while (value != -1 && !doubleQueue.isFull()) {

		doubleQueue.enqueue(value);
		if (doubleQueue.isFull()) {
			cout << "\nThe queue is full." << endl;
			break;
		}
		cout << "Please enter  the double value #" << ++i << " : ";
		cin >> value;
	}
	cout << "Getting data from the static queue with double values" << endl;
	value = 0, i = 0;
	while (!doubleQueue.isEmpty()) {
		doubleQueue.dequeue(value);
		cout << "\nThe double value #" << ++i << " : " << value;

	}
}