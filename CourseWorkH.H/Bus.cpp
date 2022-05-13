#include "Vehicle.h"
#include "Bus.h"


	Bus::Bus() {
		newSeats = new int;
	}
	Bus::~Bus() {
		delete[]newSeats;
	}
	/*constructor and distructor*/
	void Bus::setInfo()
	{
		int val;
		cout << "Input how many seats arein teh bus" << endl;
		cin >> val;
		*newSeats = val;
		*Infostr = to_string(*newSeats);
	}/*setter*/
	void Bus::GetInfo()
	{
		cout << "The number of seats: " << *Infostr << endl;
	} /*getter*/