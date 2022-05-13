#pragma once
#include <vector>
#include <iostream>
using namespace std;
class Bus : public Vehicle
{
public:
	Bus();
	~Bus();
	void setInfo();
	virtual void GetInfo();
	/*getter , setter ,constructor and distructor*/
private: 
	int* newSeats;
};

