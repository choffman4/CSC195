#pragma once


class Employee
{
	static const float TAX;

	private: 
		double grossIncome;
		float netIncome;
		int totalHours;
		char name[32];
		unsigned short age;
		unsigned int zipcode;
		double wage;
		unsigned int daysWorked;
		unsigned short hoursWorkedPerDay[7];


	public:
		void Read();
		void Write();
};