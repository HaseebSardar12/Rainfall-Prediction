#include<iostream>
using namespace std;
int main()
{
	double lastyear[12], currentyear[12];
	double lastyeartotal = 0, currentyeartotal = 0, lastyearavg = 0, currentyearavg = 0, sum = 0;
	cout << "Input yearly rainfall statistics in pairs ( last year     current year ) for 12 months: " << endl;

	cout << "January: ";
	cin >> lastyear[0];
	cin >> currentyear[0];

	cout << "February: ";
	cin >> lastyear[1];
	cin >> currentyear[1];

	cout << "March: ";
	cin >> lastyear[2];
	cin >> currentyear[2];

	cout << "April: ";
	cin >> lastyear[3];
	cin >> currentyear[3];

	cout << "May: ";
	cin >> lastyear[4];
	cin >> currentyear[4];

	cout << "June: ";
	cin >> lastyear[5];
	cin >> currentyear[5];

	cout << "July: ";
	cin >> lastyear[6];
	cin >> currentyear[6];

	cout << "August: ";
	cin >> lastyear[7];
	cin >> currentyear[7];

	cout << "September: ";
	cin >> lastyear[8];
	cin >> currentyear[8];

	cout << "October: ";
	cin >> lastyear[9];
	cin >> currentyear[9];

	cout << "November: ";
	cin >> lastyear[10];
	cin >> currentyear[10];

	cout << "December: ";
	cin >> lastyear[11];
	cin >> currentyear[11];

	cout << endl;

	cout << "Table of monthly rainfall is as follows: " << endl;
	cout << "\t\tJan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec" << endl;
	cout << "Last Year\t";
	for (int i = 0; i < 12; i++)
	{
		cout << lastyear[i] << "\t";
	}
	cout << endl;
	cout << "Current Year\t";
	for (int i = 0; i < 12; i++)
	{
		cout << currentyear[i] << "\t";
	}
	cout << endl << endl;
	cout << "Total rainfall last year: ";
	for (int i = 0; i < 12; i++)
	{
		lastyeartotal = lastyeartotal + lastyear[i];
	}
	cout << lastyeartotal << endl;

	cout << "Total rainfall this year: ";
	for (int i = 0; i < 12; i++)
	{
		currentyeartotal = currentyeartotal + currentyear[i];
	}
	cout << currentyeartotal << endl;

	cout << "Average monthly rainfall last year: ";
	lastyearavg = lastyeartotal / 12;
	cout << lastyearavg << endl;

	cout << "Average monthly rainfall this year: ";
	currentyearavg = currentyeartotal / 12;
	cout << currentyearavg << endl;
	double lastyearmax = lastyear[0];
	cout << "Highest rainfall last year: ";
	for (int i = 0; i < 12; i++)
	{
		if (lastyearmax < lastyear[i])
		{
			lastyearmax = lastyear[i];
		}
	}
	cout << lastyearmax << " in ";

	for (int i = 0; i < 12; i++)
	{
		if (lastyear[i] == lastyearmax)
		{
			if (i == 0)
				cout << "January ";
			if (i == 1)
				cout << "February ";
			if (i == 2)
				cout << "March ";
			if (i == 3)
				cout << "April ";
			if (i == 4)
				cout << "May ";
			if (i == 5)
				cout << "June ";
			if (i == 6)
				cout << "July ";
			if (i == 7)
				cout << "August ";
			if (i == 8)
				cout << "September ";
			if (i == 9)
				cout << "October ";
			if (i == 10)
				cout << "November ";
			if (i == 11)
				cout << "December ";
		}
	}
	cout << endl;
	double currentyearmax = currentyear[0];
	cout << "Highest rainfall this year: ";
	for (int i = 0; i < 12; i++)
	{
		if (currentyearmax < currentyear[i])
		{
			currentyearmax = currentyear[i];
		}
	}
	cout << currentyearmax << " in ";

	for (int i = 0; i < 12; i++)
	{
		if (currentyear[i] == currentyearmax)
		{
			if (i == 0)
				cout << "January ";
			if (i == 1)
				cout << "February ";
			if (i == 2)
				cout << "March ";
			if (i == 3)
				cout << "April ";
			if (i == 4)
				cout << "May ";
			if (i == 5)
				cout << "June ";
			if (i == 6)
				cout << "July ";
			if (i == 7)
				cout << "August ";
			if (i == 8)
				cout << "September ";
			if (i == 9)
				cout << "October ";
			if (i == 10)
				cout << "November ";
			if (i == 11)
				cout << "December ";
		}
	}
	cout << endl;

	cout << "Month having no rainfall last year: ";
	for (int i = 0; i < 12; i++)
	{
		if (lastyear[i] == 0)
		{
			if (i == 0)
				cout << "January ";
			if (i == 1)
				cout << "February ";
			if (i == 2)
				cout << "March ";
			if (i == 3)
				cout << "April ";
			if (i == 4)
				cout << "May ";
			if (i == 5)
				cout << "June ";
			if (i == 6)
				cout << "July ";
			if (i == 7)
				cout << "August ";
			if (i == 8)
				cout << "September ";
			if (i == 9)
				cout << "October ";
			if (i == 10)
				cout << "November ";
			if (i == 11)
				cout << "December ";
		}
	}
	cout << endl;
	cout << "Month having no rainfall this year: ";
	for (int i = 0; i < 12; i++)
	{
		if (currentyear[i] == 0)
		{
			if (i == 0)
				cout << "January ";
			if (i == 1)
				cout << "February ";
			if (i == 2)
				cout << "March ";
			if (i == 3)
				cout << "April ";
			if (i == 4)
				cout << "May ";
			if (i == 5)
				cout << "June ";
			if (i == 6)
				cout << "July ";
			if (i == 7)
				cout << "August ";
			if (i == 8)
				cout << "September ";
			if (i == 9)
				cout << "October ";
			if (i == 10)
				cout << "November ";
			if (i == 11)
				cout << "December  ";
		}
	}
	cout << endl;
	cout << "Next year rainfall prediction: " << endl;
	cout << "\t\tJan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec" << endl;
	cout << "Last year\t";
	for (int i = 0; i < 12; i++)
	{
		cout << lastyear[i] << "\t";
	}
	cout << endl;
	cout << "This year\t";
	for (int i = 0; i < 12; i++)
	{
		cout << currentyear[i] << "\t";
	}
	cout << endl;

	cout << "Next year\t";
	for (int i = 0; i < 12; i++)
	{
		sum = lastyear[i] + currentyear[i];
		if (sum > 5)
		{
			cout << sum / 2 << "\t";
		}
		else
		{
			cout << 0 << "\t";
		}
	}
	cout << endl;

	system("pause");
	return 0;
}