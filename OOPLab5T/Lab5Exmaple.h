#pragma once
#include <iostream>
using namespace std;
class Engine
{
	double power;
public:
	double getPower()
	{
		return power;
	}
	Engine()
	{
		power = 3;
	}
	Engine(double p)
	{
		power = p;
	}
	~Engine()
	{
		cout << "destroyed engine" << endl;
	}
	void Show()
	{
		cout << "Power: " << power << endl << endl;
	}
};
class Car {
protected:
	string mark;
	int cylinders;
	double carpower;
	Engine engine;
public:
	Car() :mark("Toyota"), cylinders(2), carpower(3) {}
	Car(string a, int b, double c) :mark(a), cylinders(b), carpower(c), engine(c) {}
	Car(string a, int b, double c, Engine d) :mark(a), cylinders(b), carpower(c), engine(d) {}
	~Car()
	{
		cout << "Car destroyed" << endl;
	}
	void Show()
	{
		cout << "Mark: " << mark << endl << "Cylinders: " << cylinders << endl << "Own ower: " << carpower << endl << "Engine power: " << engine.getPower() << endl << endl;
	}
	void setMark(string m)
	{
		if (m != "")
			mark = m;
	}
};

class Truck : public Car {
	double carryingCapacity;
public:
	Truck() : Car(), carryingCapacity(5) {
	}
	Truck(string a, int b, double c, double d) : Car(a, b, c), carryingCapacity(d) {}
	Truck(string a, int b, double c, Engine d, double e) : Car(a, b, c, d), carryingCapacity(e) {}
	Truck(double a) : Car(), carryingCapacity(a) {}
	~Truck()
	{
		cout << "destroyed truck" << endl;
	}
	void setCarryingCapacity(double c)
	{
		if (c > 0)
			carryingCapacity = c;
	}
	void Show()
	{
		cout << "Mark: " << mark << endl << "Cylinders: " << cylinders << endl << "Own ower: " << carpower << endl << "Engine power: " << engine.getPower() << endl << "Carrying capacity: " << carryingCapacity << endl << endl;
	}
};
class Furniture
{
public:
	friend istream& operator>>(istream& is, Furniture& f);
	friend ostream& operator<<(ostream& os, const Furniture& f);
protected:
	double width;
	double height;
	double length;
	Furniture(const Furniture& f) // copy ctor
	{
		width = f.width;
		height = f.height;
		length = f.length;
	}
	Furniture()
	{
		width = 1;
		height = 1;
		length = 1;
	}
	Furniture& operator=(const Furniture& f)
	{
		width = f.width;
		height = f.height;
		length = f.length;
	}
};

class Table : public Furniture
{
public:
	Table() :Furniture()
	{

	}
	Table(const Table& t) :Furniture(t)
	{

	}
	Table(const Furniture& f) :Furniture(f)
	{

	}
};

