// Program : Static queue Template
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
#ifndef STATICQUEUE_H
#define STATICQUEUE_H
 

// Queue template
template < class T>
 class StaticQueue
 {
 private:
	 T *queueArray; // Points to the queue array
	 int queueSize; // The queue size
	 int front; // Subscript of the queue front
	 int rear; // Subscript of the queue rear
	 int numItems; // Number of items in the queue
 public:
	 // Constructor
	 StaticQueue(int);
	
	// Copy constructor
	 StaticQueue(const StaticQueue &);
	
	// Destructor
	~StaticQueue();
	
	// Queue operations
	void enqueue(T);
	void dequeue(T &);
	bool isEmpty() const;
	bool isFull() const;
	void clear();
	 };

 //constructor
 template < class T>
 StaticQueue<T>::StaticQueue(int s)
{
	queueArray = new T[s];
	queueSize = s;
	front = -1;
	rear = -1;
	numItems = 0;
}
 //copy constructor
 template < class T>
 StaticQueue<T>::StaticQueue(const StaticQueue &obj)
{
		// Allocate the queue array.
		queueArray = new T[obj.queueSize];
	 
		// Copy the other object's attributes.
		queueSize = obj.queueSize;
		front = obj.front;
		rear = obj.rear;
		numItems = obj.numItems;
	 
		// Copy the other object's queue array.
		for (int count = 0; count < obj.queueSize; count++)
		queueArray[count] = obj.queueArray[count];
}
 //destructor
 template < class T>
 StaticQueue<T>::~StaticQueue()
{
	delete[] queueArray;
}
 //adding values to the queue
 template < class T>
 void StaticQueue<T>::enqueue(T item)
 {
	  if (isFull())
		  cout << "The queue is full.\n";
	  else
		{
			// Calculate the new rear position
			rear = (rear + 1) % queueSize;
			// Insert new item
			queueArray[rear] = item;
			// Update item count
			numItems++;
		}
}
 //getting the value from the queue
 template < class T>
 void StaticQueue<T>::dequeue(T &item)
{
	  if (isEmpty())
	 cout << "The queue is empty.\n";
	  else
		{
			// Move front
			front = (front + 1) % queueSize;
			// Retrieve the front item
			item = queueArray[front];
			// Update item count
			numItems--;
		}
}
 //checking whether queue is empty
 template < class T>
 bool StaticQueue<T>::isEmpty() const
{
	  bool status;
	 
	 if (numItems)
		  status = false;
	  else
		  status = true;
	 
		  return status;
 }
 //checking whether queue is full
 template < class T>
 bool StaticQueue<T>::isFull() const
 {
	  bool status;
	 
		 if (numItems < queueSize)
		  status = false;
	  else
		  status = true;
	 
		  return status;
}
 //removing all elements from the queue
 template < class T>
 void StaticQueue<T>::clear()
{
	  front = queueSize-1;
	  rear = queueSize -1;
	  numItems = 0;
 }
#endif// !STATICQUEUE_H