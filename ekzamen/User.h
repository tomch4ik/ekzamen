#pragma once
#include <string>
#include <iostream>

using namespace std;

class User
{
protected:
	string name;
	double run_distance;
	double jump_height;
public:
	User(const string& name, double runDistance, double jumpHeight);
	virtual bool run(double distance);
	virtual bool jump(double height);
	virtual string getName() const;
	virtual ~User() {}
};

