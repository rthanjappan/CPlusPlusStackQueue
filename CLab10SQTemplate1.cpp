// Program : Lab 10 
//Programmer : Rosemol Thanjappan
//Date : 3/12/2019
// running with a Menu
//   Static Stack Template Demo
//   
#include <conio.h>
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;
#include "Stack.h"
#include "DynamicStack.h"
#include "Inventory.h"
#include "StackDemo.h"
#include "DynamicStackDemo.h"
#include "StaticQueue.h"
#include "StaticQueueDemo.h"
#include "InventoryDemo.h"

 int main() {

	 /*StackDemo sD1;
	 sD1.intMainLine();
	 cout << "\n" << endl;
	 sD1.doubleMainLine();
	 cout << "\n" << endl;

	 DynamicStackDemo dSD1;
	 dSD1.intMainLine();
	 cout << "\n" << endl;
	 dSD1.doubleMainLine();
	 cout << "\n" << endl;

	 StaticQueueDemo sDQ1;
	 sDQ1.intMainLine();
	 cout << "\n" << endl;
	 sDQ1.doubleMainLine();
	 cout << "\n" << endl;*/

	 InventoryDemo iD1;
	 iD1.mainMenu();

	 //DynamicStack<Inventory> inventoryStack;
	 //cout << "Entering data to dynamic stack with integers(-1 to quit)" << endl;
	 //int value = 0, i = 0; int choice = 0;
	 //
	 ///*cout << "Please enter  the integer #" << ++i << " : ";
	 //cin >> value;*/
	 //while (choice != -1) {
		// Inventory temp;
		// string mDate = "12/1/2019";
		// temp.setSerialNum(1001);
		// temp.setManufactDate("1/1/2019");
		// temp.setLotNum(101);
		// inventoryStack.push(temp);
		// //inventoryStack.push(value);
		// cout << "do you want to continue? (-1 to quit) : ";
		// cin >> choice;
		// cout << "Please enter  the integer #" << ++i << " : ";
		// cin >> value;
	 //}

	 //cout << "Getting data from the dynamic stack with integers" << endl;
	 //value = 0, i = 0;
	 //while (!inventoryStack.isEmpty()) {
		//// inventoryStack.pop(value);
		// cout << "\nThe integer #" << ++i << " : " << value;

	 //}
	

	 //Inventory poppedValue;
	 //inventoryStack.pop(poppedValue);
	 //cout << "\n\n"<<poppedValue << endl;


	 system("pause");
	 return 0;
 }