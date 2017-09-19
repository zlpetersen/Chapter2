// Chapter1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<stdlib.h>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int name_address();  // name and address
int ftoy();  // furlongs to yards
void tbmp();  // prints "Three blind mice"
void shtr();  // prints "See how they run"
int tbm();  // three blind mice
int ytom();  // years to months
int ctof();  // celcius to fahrenheit
int lytoau();  // light years to astronomical units
int hmf();  // hour minute format

int name_address()
{
	string n;
	std::getline(cin, n);
	system("CLS");
	cout.flush();
	cout << "Enter your name:\n> ";
	string name;
	std::getline(cin, name);
	cout << "Enter your address:\n> ";
	string address;
	std::getline(cin, address);
	cout << "Name: " << name << "\nAddress: " << address << endl;
	system("PAUSE");
	return 0;
}

int ftoy()
{
	string n;
	std::getline(cin, n);
	system("CLS");
	cout.flush();
	cout << "Enter furlongs:\n> ";
	int furlongs;
	cin >> furlongs;
	int yards = furlongs * 220;
	cout << furlongs << " furlong(s) is " << yards << " yards.\n";
	system("PAUSE");
	return 0;
}

void tbmp()
{
	cout << "Three blind mice\n";
}

void shtr()
{
	cout << "See how they run\n";
}

int tbm()
{
	string n;
	std::getline(cin, n);
	system("CLS");
	cout.flush();
	tbmp();
	tbmp();
	shtr();
	shtr();
	cout << endl;
	system("PAUSE");
	return 0;
}

int ytom()
{
	string n;
	std::getline(cin, n);
	system("CLS");
	cout.flush();
	cout << "Enter your age:\n> ";
	int age;
	cin >> age;
	cout << "Your age in months is " << age * 12 << endl;
	system("PAUSE");
	return 0;
}

int ctof()
{
	string n;
	std::getline(cin, n);
	system("CLS");
	cout.flush();
	cout << "Please enter a Celcius value:\n> ";
	float c;
	cin >> c;
	float f = c * 1.8f + 32.0f;
	cout << c << " degrees Celcius is " << f << " degrees Fahrenheit.\n";
	system("PAUSE");
	return 0;
}

int lytoau()
{
	string n;
	std::getline(cin, n);
	system("CLS");
	cout.flush();
	cout << "Enter the number of light years:\n> ";
	float ly;
	cin >> ly;
	int au = ly * 63240;
	cout << ly << " light years = " << au << " astronomical units.\n";
	system("PAUSE");
	return 0;
}

int hmf()
{
	string n;
	std::getline(cin, n);
	system("CLS");
	cout.flush();
	cout << "Enter the number of hours:\n> ";
	int h;
	cin >> h;
	cout << "Enter the number of minutes:\n> ";
	int m;
	cin >> m;
	cout << "Time: " << h << ":" << m << endl;
	system("PAUSE");
	return 0;
}

int main()
{
	while (true)
	{
		system("CLS");
		cout << "Pick an option:\n1. Name and Address\n"
			 << "2. Furlongs to Yards\n3. Three blind mice\n4. Years to Months\n5. "
			 << "Celcius to Fahrenheit\n6. LY to AU\n7. Hour Minute format\n8. Quit\n> ";
		int choice = 0;
		cin >> choice;
		string n;
		if (choice == 1) choice = name_address();
		else if (choice == 2) choice = ftoy();
		else if (choice == 3) choice = tbm();
		else if (choice == 4) choice = ytom();
		else if (choice == 5) choice = ctof();
		else if (choice == 6) choice = lytoau();
		else if (choice == 7) choice = hmf();
		else if (choice == 8) break;
		else
		{
			cout << "Please enter a valid value\n";
			system("PAUSE");
		}
		std::getline(cin, n);
		cin.clear();
		cin.ignore(100, '\n');
	}
    return 0;
}