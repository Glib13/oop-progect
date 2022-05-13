#include "Vehicle.h"
#include "Car.h"


	Car::Car() {
		newType = new string;
	}
	Car::~Car(){
		delete[] newType;
	}
	/*constructor and distructor*/
	void Car::setInfo( )
	{
		string val;
		cout << "Input type of car" << endl;
		cin >> val;
		*newType = val;
		*Infostr = *newType;
	}/*setter*/
	void Car::GetInfo()
	{
		 cout << "The type ofcar: "<< *newType<< endl;
	}/*getter*/