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
#include "InventoryDemo.h"
#include"Inventory.h"
using namespace std;
//processing the main menu
void InventoryDemo::mainMenu(void)
{
	showMenu();
	enterChoice();
	while (iChoice != 4)
	{
		makeSelection();
		showMenu();
		enterChoice();
	}
	return;
}
//showing the main menu
void InventoryDemo::showMenu(void)
{
	system("cls");
	cout << "\n\t         Welcome to Inventory Demo  Program";
	cout << "\n\n\t          Main Menu";
	cout << "\n\n\t          Select one:";
	cout << "\n\n\t          1. Add data to the inventory";
	cout << "\n\n\t          2. Get data from the inventory";
	cout << "\n\n\t          3. Display the remaining data in the inventory.";
	cout << "\n\n\t          4. Exit";
	cout << "\n\n\t          Enter choice (1 - 4) ===> ";
	return;
}
//reading the choice
void InventoryDemo::enterChoice(void)
{
	cin >> iChoice;
	while (iChoice < 1 || iChoice > 4)
	{
		cout << "\nERROR...re-enter choice (1 - 4) ===> ";
		cin >> iChoice;
	}
	return;
}
//selecting the corresponding program according to users choice
void InventoryDemo::makeSelection(void)
{
	
	InventoryDemo iD1;
	// Clear Screen before printing Headings
	system("cls");
	switch (iChoice)
	{

	case 1:
		cout << "       Add data to inventory \n " << endl;
		addData();
		system("pause");
		break;
	case 2:
		cout << "       Get data from inventory\n" << endl;
		getData();
		system("pause");
		break;
	case 3:

		cout << "       Display the remaining data in the inventory.\n" << endl;
		remainingData();
		system("pause");
		break;

	}

	return;
}
//method to add data to the inventory stack
void InventoryDemo::addData(void) {
	
		Inventory temp;
		
		int sNum, lNum;
		string mDate;
		cout << "please enter the serial number : ";
		cin >> sNum;
		cin.get();
		cout << "please enter the manufacturing date : ";
		getline(cin, mDate);
		cout << "please enter the lot number : ";
		cin >> lNum;

		temp.setSerialNum(sNum);
		temp.setManufactDate(mDate);
		temp.setLotNum(lNum);

		inventoryStack.push(temp);
		
	}

//method to get data from the inventory stack
void InventoryDemo::getData(void) {
	cout << "Getting data from the inventory stack" << endl;
	if (inventoryStack.isEmpty()) {
		cout << "The inventory has no data." << endl;
	}
	else{

		Inventory value;
		inventoryStack.pop(value);
		cout << value<<endl;

	}
}
//displaying the remaining data from the inventory stack
void InventoryDemo::remainingData(void) {
	cout << "Getting the remaining data from the Inventory" << endl;
	Inventory value;
	 while (!inventoryStack.isEmpty()) {
		inventoryStack.pop(value);
		cout << value << endl<<endl;

	 }


	 
}