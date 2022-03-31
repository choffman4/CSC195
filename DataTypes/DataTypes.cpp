// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{
	string name;
	char initial;
	unsigned short age;
	bool isAdult = false;
	unsigned int zipcode;
	double wage;
	unsigned int daysWorked;
	unsigned short hoursWorkedPerDay[7];
	unsigned short totalHours = 0;
	const float TAX = 0.12f;


	cout << "enter first name: ";
	cin >> name;
	cout << "enter last initial: ";
	cin >> initial;
	cout << "enter age: ";
	cin >> age;
	if (age >= 18) {
		isAdult = true;
		cout << std::boolalpha;
		cout << name << " " << initial << " is an adult.\n";
	}
	cout << "enter zipcode: ";
	cin >> zipcode;
	cout << "enter wage: ";
	cin >> wage;
	cout << "enter days worked: ";
	cin >> daysWorked;
	for (int i = 0; i < daysWorked; i++) {
		cout << "enter hours worked for the day: ";
		cin >> hoursWorkedPerDay[i];
		totalHours += hoursWorkedPerDay[i];
	}
	cout << name << " worked " << totalHours << " hours at $" << wage << " an hour." << "\n";

	double grossIncome = (totalHours * wage);
	float netIncome = (grossIncome - (TAX* grossIncome));

	cout << "grossIncome:" << grossIncome << "\n";
	cout << "netIncome: " << netIncome << endl;
	

}
