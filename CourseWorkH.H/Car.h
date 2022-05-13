#pragma once
#include <vector>
#include <iostream>
using namespace std;
class Car : public Vehicle
{
public:
	Car();
	~Car();
	virtual void setInfo();
	virtual void GetInfo();
	/*initializing the virtual getter and setter*/
private:
	string *newType;
};