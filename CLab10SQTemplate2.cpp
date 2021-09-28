// Program : Lab 10 
//Programmer : Rosemol Thanjappan
//Date : 3/21/2019
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
class MainProcess
{
public:
	void mainMenu(void);

private:
	int iChoice;

	void showMenu(void);
	void enterChoice(void);
	void makeSelection(void);
};
 int main() {

	 MainProcess mP1;
	 mP1.mainMenu();

	 system("pause");
	 return 0;
 }

 //processing the main menu
 void MainProcess::mainMenu(void)
 {
	 showMenu();
	 enterChoice();
	 while (iChoice != 5)
	 {
		 makeSelection();
		 showMenu();
		 enterChoice();
	 }
	 return;
 }
 //showing the main menu
 void MainProcess::showMenu(void)
 {
	 system("cls");
	 cout << "\n\t         Welcome to Lab 10  Programs";
	 cout << "\n\n\t          Main Menu";
	 cout << "\n\n\t          Select one:";
	 cout << "\n\n\t          1. Static Stack Demo";
	 cout << "\n\n\t          2. Dynamic statck Demo";
	 cout << "\n\n\t          3. Static queue demo";
	 cout << "\n\n\t          4. Inventory stack  demo";
	 cout << "\n\n\t          5. Exit";
	 cout << "\n\n\t          Enter choice (1 - 5) ===> ";
	 return;
 }
 //reading the choice
 void MainProcess::enterChoice(void)
 {
	 cin >> iChoice;
	 while (iChoice < 1 || iChoice > 5)
	 {
		 cout << "\nERROR...re-enter choice (1 - 5) ===> ";
		 cin >> iChoice;
	 }
	 return;
 }
 //selecting the corresponding program according to users choice
 void MainProcess::makeSelection(void)
 {
	 
	 StackDemo sD1;
	 DynamicStackDemo dSD1;
	 StaticQueueDemo sQD1;
	 InventoryDemo iD1;
	 // Clear Screen before printing Headings
	 system("cls");
	 switch (iChoice)
	 {

	 case 1:
		 cout << "       Static Stack Demo \n " << endl;
		 sD1.intMainLine();
		 cout << "\n\n";
		 sD1.doubleMainLine();
		 system("pause");
		 break;
	 case 2:
		 cout << "       Dynamic stack demo\n" << endl;
		 dSD1.intMainLine();
		 cout << "\n\n";
		 dSD1.doubleMainLine();
		 system("pause");
		 break;
	 case 3:

		 cout << "       Static queue demo\n" << endl;
		 sQD1.intMainLine();
		 cout << "\n\n";
		 sQD1.doubleMainLine();
		 system("pause");
		 break;
	 case 4:

		 cout << "       Inventory stack demo\n" << endl;
		 iD1.mainMenu();
		 system("pause");
		 break;

	 }

	 return;
 }