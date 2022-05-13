#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Truck.h"
#include "ServiseCar.h"
#include <iostream>
#include<vector>
#include <cstdlib>
void deleteElemVector(vector<Vehicle>& VehicleList, int index)
{
	VehicleList.erase(VehicleList.begin() + index - 1);
}
using namespace std;
int main()
{
	vector<Vehicle> VehicleList;/*vector in whitch will be stored objects*/
	int chouse;
	int type;
	string carname;/*some variables that ,define the chose , type of car , and object name*/
	std::cout << "Hello this is car shop\n";
	bool exit = true;
	do/*do while loop till eit == true*/
	{
			std::cout << "1 - add car, 2 - show cars , 3 - delete car, 4 - leave the shop\n";
			cin >> chouse;/*entering the chouse*/
			if (chouse >= 1 && chouse <= 4)/*if costructor to check if the entered value is valid*/
			{
				switch (chouse)/*switch case construction*/
				{
				case 1:/*add car*/
				{
						cout << "what type of car you want to add add?\n";
						cout << "1 - Car, 2 - Bus, 3 - Truck, 4 - ServiceCar, 5 - go back\n";
						cin >> type;
						if (type >= 1 && type <= 5)/*if costructor to check if the entered value is valid*/
						{
						switch (type)/*switch case construction*/
						{
						case 1:/*creating Car*/
						{
							cout << "input car name in the system\n";
							cin >> carname;
							Vehicle* carname = new Car();/*creating the object based on class Car and pointed to VEhicle*/
							cin >> carname;/*overloading operator to wright objects values*/
							VehicleList.push_back(*carname);/*pushing object to the vector*/
							cout << "You have sucsesfully added the car\n";
							break;
						}
						case 2:/*creating Bus*/
						{
							cout << "input bus name in the system\n";
							cin >> carname;
							Vehicle* carname = new Bus();/*creating the object based on class Bus and pointed to VEhicle*/
							cin >> carname;/*overloading operator to wright objects values*/
							VehicleList.push_back(*carname);/*pushing object to the vector*/
							cout << "You have sucsesfully added the car\n";
							break;
						}
						case 3:/*creating Truck*/
						{
							cout << "input Truck name in the system\n";
							cin >> carname;
							Vehicle* carname = new Truck();/*creating the object based on class Bus and pointed to VEhicle*/
							cin >> carname;/*overloading operator to wright objects values*/
							VehicleList.push_back(*carname);/*pushing object to the vector*/
							cout << "You have sucsesfully added the car\n";
							break;
						}
						case 4:/*creating ServiseCar*/
						{
							cout << "input ServiseCar name in the system\n";
							cin >> carname;
							Vehicle* carname = new ServiseCar();/*creating the object based on class ServiseCar and pointed to VEhicle*/
							cin >> carname;/*overloading operator to wright objects values*/
							VehicleList.push_back(*carname);/*pushing object to the vector*/
							cout << "You have sucsesfully added the car\n";
							break;
						}
						case 5:
						{/*breaking the swithc case*/
							break;
						}
						}
						}
						else
						{
							cout << "You entered invalid value" << endl;
						}
						break;
				}
				case 2:/*show cars*/
				{
					cout << VehicleList;/*overloading operator to outputthe vector*/
					break;
				}
				case 3:/*delete car*/
				{	if (VehicleList.size() >= 1)/*checking the vector size*/ {
					cout << "Enter the vehicle number you want to delete" << endl;
					int index;/*creating and inputing the variable*/
					cin >> index;
					deleteElemVector(VehicleList, index);/*asking function that takes Vector and Inddex(inde of car that user want to delete*/
					cout << "You have succesfully deleted car N: " << index << endl;
				}
				else {
					cout << "Thereis no cars added" << endl;
				}
				break;
				}
				case 4:/*leave the program*/
				{
					exit = false;
					break;
				}
				default:/* leaving the programm by default*/
				{
					exit = false;
					break;
				}
				}
			}
			else
			{
				cout << " You entered invalid value" << endl;
			}
	} 
	while (exit == true);
}