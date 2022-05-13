#include "Vehicle.h"
#include "Truck.h"

	Truck::Truck() {
		newCapasity = new int;
	}
	Truck::~Truck() {
		delete[]newCapasity;

	}
	/*constructor and distructor*/
	void Truck::setInfo()
	{
		int val;
		cout << "Input the capasity of trunk" << endl;
		cin >> val;
		*newCapasity = val;
		*Infostr = to_string(*newCapasity);
	}/*setter*/
	void Truck::GetInfo()
	{
		cout << "Capacity is : " << to_string (*newCapasity) << endl;;
	}/*getter*/
