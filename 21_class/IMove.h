#pragma once
#include <iostream>
using namespace std;
//struct IMove
//{
//	virtual void move() const = 0;
//	virtual size_t getSpeed() const = 0;
//};
//struct IFly : public IMove
//{
//	virtual void fly() const = 0;
//	virtual size_t getHeight() const = 0;
//};
//
//
//class Bird : public IFly
//{
//public:
//	Bird(const size_t& height, const size_t& speed)
//		:height(height),speed(speed)
//	{
//
//	}
//
//	virtual void fly() const
//	{
//		cout << "Bird " << typeid(*this).name() << " can move with speed " << getHeight() << endl;
//	}
//	virtual size_t getHeight() const
//	{
//		return height;
//	}
//	virtual void move() const
//	{
//		cout << "Bird " << typeid(*this).name() << " can walk and fly " << getSpeed() << endl;
//	}
//
//
//	virtual size_t getSpeed() const
//	{
//		return speed;
//	}
//private:
//	size_t height;
//	size_t speed;
//};
//
//class Eagle : public Bird
//{
//public:
//	Eagle()
//		:Bird(2000,30)
//	{
//
//	}
//};
//class Gull : public Bird
//{
//public:
//	Gull()
//		:Bird(500, 5)
//	{
//
//	}
//};
//
//class Car : public IMove
//{
//public:
//	Car(const string& brand, const size_t& speed = 200)
//		:brand(brand) , speed(speed)
//	{
//	}
//
//	virtual void move() const
//	{
//		cout << "Car " << brand << " can move with speed " << getSpeed() << endl;
//	}
//
//
//	virtual size_t getSpeed() const
//	{
//		return speed;
//	}
//
//
//class Owner
//{
//public:
//	Owner(const string& name, IMove* moveable)
//		:name(name), moveable(moveable)
//	{
//
//	}
//	void go()
//	{
//		moveable->move();
//	}
//
//private:
//	string brand;
//	size_t speed;
//	IMove* moveable;
//};


struct IDricable
{
	virtual void start() const = 0;
	virtual void stop() const = 0;
	virtual void upSpeed()  = 0;
	virtual void downSpeed()  = 0;

};
class Car : public IDricable
{
	string brand;
	const size_t maxSpeed = 200;
	size_t speed;
public:
	Car(const string& brand, const size_t& speed)
		:brand(brand), speed(speed)
	{

	}
	virtual void start() const
	{
		cout << "Car move with speed --> " << speed << endl;
	}
	virtual void stop() const
	{
		cout << "Car dont move" << endl;
	}
	virtual void upSpeed() 
	{
		if (speed < maxSpeed) {
			speed += 5;
		}
		cout << "Car speed --> " << speed << endl;

	}
	virtual void downSpeed() 
	{
		if (speed > 0) {
			speed -= 5;
		}
		cout << "Car speed --> " << speed << endl;

	}
};
class Horse : public IDricable
{
	string name;
	const size_t maxSpeed = 200;
	size_t speed;
	string poroda;
public:
	Horse(const string& name, const string& poroda, const size_t& speed)
		:name(name), poroda(poroda), speed(speed)
	{

	}
	virtual void start() const
	{
		cout << "Horse move with speed --> " << speed << endl;
	}
	virtual void stop() const
	{
		cout << "Horse dont move" << endl;
	}
	virtual void upSpeed()
	{
	
		if (speed < maxSpeed) {
			speed += 5;
		}
		cout << "Horse speed --> " << speed << endl;

	}
	virtual void downSpeed()
	{
		if (speed > 0) {
			speed -= 5;
		}
		cout << "Horse speed --> " << speed << endl;

	}

};

class Driver
{
private:
	string name;
	IDricable* vehicle;
public:
	Driver(const string& name, IDricable* vehicle)
		:name{ name }, vehicle{ vehicle }
	{

	}
	void setVehicle(IDricable* vehicle1)
	{
		vehicle = vehicle1;
		cout << name << " has switched to a new vehicle" << endl;
	}

	void testDrive()
	{
		if (vehicle)
		{
			int d = 10;
			while (d != 0)
			{
				

				cout << "1.Start" << endl;
				cout << "2.Stop" << endl;
				cout << "3.UpSpeed" << endl;
				cout << "4.DownSpeed" << endl;
				cout << "5.Exit" << endl;
				cout << "Select choice --> ";
				cin >> d;
				if (d == 1)
				{
					vehicle->start();
					cout << endl;
				}
				else if (d == 2)
				{
					vehicle->stop();
					cout << endl;

				}
				else if (d == 3)
				{
					vehicle->upSpeed();
					cout << endl;

				}
				else if (d == 4)
				{
					vehicle->downSpeed();
					cout << endl;

				}
				else if (d == 5)
				{

					break;

				}
			}
			
			
		}
	}



};