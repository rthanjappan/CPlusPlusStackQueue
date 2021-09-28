// Program : Inventory Bin Stack
//Programmer : Rosemol Thanjappan
//Date : 3/21/2019
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
#ifndef INVENTORY_H
#define INVENTORY_H
//inventory class
class Inventory {
public:

	void setSerialNum(int sNum) {
		serialNum = sNum;
	}
	void setManufactDate(string date) {
		manufactDate = date;
	}
	void setLotNum(int lNum) {
		lotNum = lNum;
	}


	int getSerialNum() {
		return serialNum;
	}
	string getManufactDate() {
		return manufactDate;;
	}
	int getLotNum() {
		return lotNum;
	}
	//overload cout’s << operator and cin’s >> operator
	friend ostream &operator << (ostream &strm, const Inventory &obj) {

		strm << "Serial Number : " << obj.serialNum
			<< "\nManufacturing Date  : " << obj.manufactDate
			<< "\nLot number  : " << obj.lotNum;

		return strm;
	}
private:
	int serialNum;
	string manufactDate;
	int lotNum;
};
#endif// !INVENTORY_H
