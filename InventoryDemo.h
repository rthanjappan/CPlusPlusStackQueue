// Program : Inventory Stack Demo
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

#pragma once
#ifndef INVENTORYDEMO_H
#define INVENTORYDEMO_H
//Inventory demo using dynamic stack
class InventoryDemo
{
public:
	void mainMenu(void);

private:
	int iChoice;

	void showMenu(void);
	void enterChoice(void);
	void makeSelection(void);


	void addData(void);
	void getData(void);
	void remainingData();
	DynamicStack<Inventory> inventoryStack;
};
#endif// !INVENTORYDEMO_H