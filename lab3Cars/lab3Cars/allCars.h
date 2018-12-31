#pragma once
#include <iostream>
#include "pch.h"
#include <string>
#include <math.h>
#include <cstdlib>
using namespace std;

class
	Vehicle
{
public:
	virtual int testCapacity(int a);
	virtual string desc();
	virtual int capacity();
	virtual int price();
	virtual float milage();
	
};
class
	Microbuss: public Vehicle
{
public:
	int count;
	int testCapacity(int a);
	string desc();
	int capacity();
	int price();
	float milage();
	Microbuss();
	void printNumber();
	void reduceValue();
};
class
	Sedan: public Vehicle
{
public:
	int count;
	int testCapacity(int a);
	string desc();
	int capacity();
	int price();
	float milage();
	Sedan();
	void printNumber();
	void reduceValue();
	
};
class
	Jeep : public Vehicle
{
public:
	int count;
	int testCapacity(int a);
	string desc();
	int capacity();
	int price();
	float milage();
	Jeep();
	void printNumber();
	void reduceValue();
};
void findingACar();
void testPrice(int a, int price, float milage);
void testMilage(int a, float milage);