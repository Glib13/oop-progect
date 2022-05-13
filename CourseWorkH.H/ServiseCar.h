#pragma once
#include <vector>
#include <iostream>
using namespace std;
class ServiseCar : public Vehicle
{
public:
	ServiseCar();
	~ServiseCar();
	void setInfo();
	virtual void GetInfo();
	/*getter , setter ,constructor and distructor*/
private:
	string *newServiseType;
};
