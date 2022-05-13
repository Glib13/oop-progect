#pragma once
#include <vector>
#include <iostream>
using namespace std;
class Truck : public Vehicle
{
public:
	Truck();
	~Truck();
	void setInfo();
	virtual void GetInfo();
	/*initializing the virtual getter and setter*/
private:
	int *newCapasity;
};
