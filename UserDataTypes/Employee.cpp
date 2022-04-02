#include "Employee.h"
#include <iostream>
using namespace std;

const float Employee::TAX = 0.12f;
int totalHours;


void Employee::Read() {
	cout << "enter first name: ";
	cin >> name;
	cout << "enter age: ";
	cin >> age;
	cout << "enter zipcode: ";
	cin >> zipcode;
	cout << "enter hourly wage: ";
	cin >> wage;
	cout << "enter days worked: ";
	cin >> daysWorked;
	totalHours = 0;
	for (int i = 0; i < daysWorked; i++) {
		cout << "enter hours worked for day " << i+1 << ": ";
		cin >> hoursWorkedPerDay[i];
		totalHours += hoursWorkedPerDay[i];
	}
}



void Employee::Write() {
	grossIncome = (totalHours * wage);
	netIncome = (grossIncome - (TAX * grossIncome));
	cout << name << " worked " << totalHours << " hours at $" << wage << " an hour." << "\n";
	cout << "grossIncome: " << grossIncome << "\n";
	cout << "netIncome: " << netIncome << endl;
}
