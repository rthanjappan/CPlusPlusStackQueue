// Program : Static Stack Template
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
using namespace std;
#pragma once
#ifndef STACK_H
#define STACK_H
// Stack template
template < class T>
class Stack
{
private:
	T *stackArray;
	int stackSize;
	int top;

public:
	// Constructor
	Stack(int);
	// Copy constructor
	Stack(const Stack &);


	// Destructor
	///template < class T>
	~Stack();

	// Stack operations
	void push(T);
	void pop(T &);
	bool isFull();
	bool isEmpty();
};
//constructor
template < class T>
Stack<T>::Stack(int size)
{
	stackArray = new T[size];
	stackSize = size;
	top = -1;

}
//copy constructor
template < class T>
Stack<T>::Stack(const Stack &obj)
{
	// Create the stack array.
	if (obj.stackSize > 0)
		stackArray = new T[obj.stackSize];
	else
		stackArray = nullptr;

	// Copy the stackSize attribute.
	stackSize = obj.stackSize;

	// Copy the stack contents.
	for (int count = 0; count < stackSize; count++)
		stackArray[count] = obj.stackArray[count];

	// Set the top of the stack.
	top = obj.top;
}
//destructor
template < class T>
Stack<T>::~Stack()
{
	if (stackSize > 0)
		delete[] stackArray;
}
//push method
template < class T>
void Stack<T>::push(T item)
{
	if (isFull())
	{
		cout << "The stack is full.\n";
	}
	else
	{
		top++;
		stackArray[top] = item;
	}
}
//pop method
template < class T>
void Stack<T>::pop(T &item)
{
	if (isEmpty())
	{
		cout << "The stack is empty.\n";
	}
	else
	{
		item = stackArray[top];
		top--;
	}
}
//checking whether stack is full
template < class T>
bool Stack<T>::isFull()
{
	bool status;

	if (top == stackSize - 1)
		status = true;
	else
		status = false;

	return status;
}
//checking whether stack is empty
template < class T>
bool Stack<T>::isEmpty()
{
	bool status;

	if (top == -1)
		status = true;
	else
		status = false;

	return status;
}
#endif// !STACK_H
