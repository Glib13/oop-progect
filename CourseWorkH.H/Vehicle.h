#pragma once
#include<iostream>
#pragma once
#include <vector>
#include<string>
#include <iostream>
using namespace std;
class Vehicle
{
	public:
		Vehicle();
		~Vehicle();
		void setMark(string Mark);
		void setModel(string Model);
		void setYear(int Year);
		void setHP(int val);
		void setPrice(int Price);
		void getMark();
		void getModel();
		void getYear();
		void  getHP();
		void getPrice();
		virtual void setInfo();
		string* Infostr;
		virtual void GetInfo() ;
		friend ostream& operator<<(ostream & Cout, vector<Vehicle>& VehicleList);
		friend istream& operator>>(istream& cin, Vehicle* carname);
		/*initializing the functions*/
	private:
		int *newHp;
		string *newModel;
		int *newYear;
		int *newPrice;
		string *newMark;
		/*initializing the variables*/
};
istream& operator>>(istream& cin, Vehicle* carname);
ostream& operator<<(ostream& Cout, vector<Vehicle>& VehicleList);

