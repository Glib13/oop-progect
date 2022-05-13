#include "Vehicle.h"
#include "ServiseCar.h"


ServiseCar::ServiseCar() {
	newServiseType = new string;
}
ServiseCar::~ServiseCar() {
	delete[]newServiseType;
}
/*constructor and distructor*/
	void ServiseCar::setInfo()
	{
		string val;
		cout << "Input service type" << endl;
		cin >> val;
		*newServiseType = val;
		*Infostr = *newServiseType;
	}
	/*setter*/
	void ServiseCar::GetInfo()
	{
		cout<<"Service type: "<< * newServiseType<< endl;
	}
	/*getter*/
