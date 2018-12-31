#include "pch.h"
#include "allCars.h"




string Vehicle::desc()
{
	return "Vehicle"; 
}
int Vehicle::capacity()
{
	return 666;
}
int Vehicle::price()
{
	return 1337;
}
float Vehicle::milage()
{
	return 66.6;
}
int Vehicle::testCapacity(int a)
{
	return 666;
}
string Microbuss::desc()
{
	return"Volkswagen type 2";
}
int Microbuss::capacity()
{
	return 8;
}
int Microbuss::price()
{
	return 20;
}
float Microbuss::milage()
{
	return 0.032;
}
int Microbuss::testCapacity(int a)
{
	int counter = 1;
	while (a > this->capacity())
	{
		counter++;
		a = a-this->capacity();
	}
	return counter;
}
Microbuss::Microbuss()
{
	this->count = rand() % 5;
}
void Microbuss::printNumber()
{
	cout << this->count << " ";
}
void Microbuss::reduceValue()
{
	count--;
}
string Sedan::desc()
{
	return "Honda Accord";
}
int Sedan::capacity()
{
	return 5;
}
int Sedan::price()
{
	return 15;
}
float Sedan::milage()
{
	return 0.018;
}
int Sedan::testCapacity(int a)
{
	int counter = 1;
	while (a > this->capacity())
	{
		counter++;
		a = a - this->capacity();
	}
	return counter;
}
Sedan::Sedan()
{
	this->count = rand() % 5;
}
void Sedan::printNumber()
{
	cout << this->count << " ";
}
void Sedan::reduceValue()
{
	count--;
}
string Jeep::desc()
{
	return"Jeep Renegade";
}
int Jeep::capacity()
{
	return 5;
}
int Jeep::price()
{
	return 18;
}
float Jeep::milage()
{
	return 0.036;
}
int Jeep::testCapacity(int a)
{
	int counter = 1;
	while (a > this->capacity())
	{
		counter++;
		a = a - this->capacity();
	}
	return counter;
}
Jeep::Jeep()
{
	this->count = rand() % 5;
}
void Jeep::printNumber()
{
	cout << this->count << " ";
}
void Jeep::reduceValue()
{
	count--;
}
void findingACar()
{
	int number, price, compare =0;
	float milage;
	cout << "Wellcome to AVIS car rental service:" << endl;
	cout << "How many People do you need room for" << endl;
	cin >> number;
	cout << "And what milage are you looking for" << endl;
	cin >> milage;
	cout << "And what kind of houerly price are you willing to pay" << endl;
	cin >> price;
	if (number > 8)
	{
		cout << "Sorry We don't have any cars that can take that number of people" << endl;
	}
	else if (number <= 8 && number > 5)
	{
		testPrice(1, price, milage);
	}
	else
	{
		testPrice(0, price, milage);
	}
	
	


}
void testPrice(int a, int price, float milage)
{
	if (price <= 15)
	{
		cout << "sorry We don't have any cars at that price" << endl;
		return;
	}
	else if (15 < price && price < 18 && a == 0)
	{
		testMilage(1, milage);
	}
	else if (18 <= price && price < 20 && a == 0)
	{
		testMilage(2, milage);
	}
	else if (price >= 20 && a == 0)
	{
		testMilage(3, milage);
	}
	else if (price >= 20 && a == 1)
	{
		testMilage(4, milage);
	}
	else
	{
		cout << "Sorry at that price we don't have any cars that can fit the number of people you require" << endl;
	}
}
void testMilage(int a, float milage)
{
	Sedan v1;
	Jeep v2;
	Microbuss v3;
	
	if (a == 1)

	{
		
		if (milage < v1.milage())
		{
			cout << "sorry We don't have any cars at that milage" << endl;
		}
		else if (milage >= v1.milage() && v1.count > 0) 
		{
			int awnser;
			cout << "We found just the right car for you:" << endl;
			cout << "The: " << v1.desc() << " fits all your needs. It's milage is: " << v1.milage() << endl;
			cout << "And the hourly price is " << v1.price() << " Dollars / hour of rental" << endl;
			cout << "We have a total of ";
			v1.printNumber();
			cout << v1.desc() << "  for rental" << endl;
			cout << "Would you like to rent the " << v1.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser;
			if (awnser == 1)
			{
				cout << "Great! " << v1.desc() << " will be awaiable to pick up soon." << endl;
				v1.reduceValue();
				cout << "We now have: ";
				v1.printNumber();
				cout << v1.desc() << "  for rental" << endl;

			}
			else if (awnser == 2)
			{
				cout << "Ok, sorry to hear that, well have a nice day, and I hope we can help you in the future." << endl;
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
		}
		else
		{
			cout << "Sorry our cars that matches those specific parameters are all rented out at the moment" << endl;
		}
	}
	else if (a == 2)
	{
		
		if(milage < v1.milage())
		{
			cout << "sorry We don't have any cars at that milage" << endl;
		}
		else if (milage >= v1.milage() && milage < v2.milage() && v1.count > 0)
		{
			int awnser;
			cout << "We found just the right car for you:" << endl;
			cout << "The: " << v1.desc() << " fits all your needs. It's milage is: " << v1.milage() << endl;
			cout << "And the hourly price is " << v1.price() << " Dollars / hour of rental" << endl;
			cout << "We have a total of ";
			v1.printNumber();
			cout << v1.desc() << "  for rental" << endl;
			cout << "Would you like to rent the " << v1.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser;
			if (awnser == 1)
			{
				cout << "Great! " << v1.desc() << " will be awaiable to pick up soon." << endl;
				v1.reduceValue();
				cout << "We now have: ";
				v1.printNumber();
				cout << v1.desc() << "  for rental" << endl;

			}
			else if (awnser == 2)
			{
				cout << "Ok, sorry to hear that, well have a nice day, and I hope we can help you in the future." << endl;
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
			
		}
		else if (milage >= v2.milage() && v1.count >0 && v2.count >0)
		{
			int awnser, awnser2;
			cout << "We have 2 cars to reccomend:" << endl;
			cout << "Either you could go with the " << v2.desc() << ". It has a milage of " << v2.milage() << " and a hourly price of" << v2.price() << endl;
			cout << "Or you could go with the " << v1.desc() << ". It has a milage of " << v1.milage() << " and a hourly price of" << v1.price() << endl;
			cout << "We have a total of ";
			v1.printNumber();
			cout << v1.desc() << "  for rental" << endl;
			cout << "And a total of ";
			v2.printNumber();
			cout << v2.desc() << "  for rental" << endl;
			cout << "Would you like to rent the " << v1.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser;
			if (awnser == 1)
			{
				cout << "Great! " << v1.desc() << " will be awaiable to pick up soon." << endl;
				v1.reduceValue();
				cout << "We now have: ";
				v1.printNumber();
				cout << v1.desc() << "  for rental" << endl;

			}
			else if (awnser == 2)
			{
				cout << "Ok, ";
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
			cout << "Would you like to rent the " << v2.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser2;
			if (awnser2 == 1)
			{
				cout << "Great! " << v2.desc() << " will be awaiable to pick up soon." << endl;
				v2.reduceValue();
				cout << "We now have: ";
				v2.printNumber();
				cout << v2.desc() << "  for rental" << endl;

			}
			else if (awnser2 == 2)
			{
				cout << "Ok, sorry to hear that, well have a nice day, and I hope we can help you in the future." << endl;
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
		}
		else if (milage >= v2.milage() && v1.count > 0 && v2.count < 1) //funkar
		{
			int awnser;
			cout << "We found just the right car for you:" << endl;
			cout << "The: " << v1.desc() << " fits all your needs. It's milage is: " << v1.milage() << endl;
			cout << "And the hourly price is " << v1.price() << " Dollars / hour of rental" << endl;
			cout << "We have a total of ";
			v1.printNumber();
			cout << v1.desc() << "  for rental" << endl;
			cout << "Would you like to rent the " << v1.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser;
			if (awnser == 1)
			{
				cout << "Great! " << v1.desc() << " will be awaiable to pick up soon." << endl;
				v1.reduceValue();
				cout << "We now have: ";
				v1.printNumber();
				cout << v1.desc() << "  for rental" << endl;

			}
			else if (awnser == 2)
			{
				cout << "Ok, sorry to hear that, well have a nice day, and I hope we can help you in the future." << endl;
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}

		}
		else if (milage >= v2.milage() && v1.count < 1 && v2.count >0) //funkar
		{
			int awnser;
			cout << "We found just the right car for you:" << endl;
			cout << "The: " << v2.desc() << " fits all your needs. It's milage is: " << v2.milage() << endl;
			cout << "And the hourly price is " << v2.price() << " Dollars / hour of rental" << endl;
			cout << "We have a total of ";
			v2.printNumber();
			cout << v2.desc() << "  for rental" << endl;
			cout << "Would you like to rent the " << v2.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser;
			if (awnser == 1)
			{
				cout << "Great! " << v2.desc() << " will be awaiable to pick up soon." << endl;
				v2.reduceValue();
				cout << "We now have: ";
				v2.printNumber();
				cout << v2.desc() << "  for rental" << endl;

			}	
			else if (awnser == 2)
			{	
				cout << "Ok, sorry to hear that, well have a nice day, and I hope we can help you in the future." << endl;
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}

		}
		else
		{
		cout << "Sorry all cars that fits your need are rented out at the moment." << endl;
		}
	}
	else if (a == 3)
	{

		if (milage < v1.milage())
		{
			cout << "sorry We don't have any cars at that milage" << endl;
		}
		else if (milage >= v1.milage() && milage < v3.milage() && v1.count >0) 
		{
			int awnser;
			cout << "We found just the right car for you:" << endl;
			cout << "The: " << v1.desc() << " fits all your needs. It's milage is: " << v1.milage() << endl;
			cout << "And the hourly price is " << v1.price() << " Dollars / hour of rental" << endl;
			cout << "We have a total of ";
			v1.printNumber();
			cout << v1.desc() << "  for rental" << endl;
			cout << "Would you like to rent the " << v1.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser;
			if (awnser == 1)
			{
				cout << "Great! " << v1.desc() << " will be awaiable to pick up soon." << endl;
				v1.reduceValue();
				cout << "We now have: ";
				v1.printNumber();
				cout << v1.desc() << "  for rental" << endl;

			}
			else if (awnser == 2)
			{
				cout << "Ok, sorry to hear that, well have a nice day, and I hope we can help you in the future." << endl;
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}

		}
		else if (milage >= v1.milage() && milage < v3.milage() && v1.count < 1) //funkar

		{
			cout << "Sorry the only car with the right parameters are all rented out at the moment" << endl;
		}
		else if (milage >= v3.milage() && milage < v2.milage() && v1.count > 0 && v3.count >0)
		{
			int awnser, awnser2;
			cout << "We have 2 cars to reccomend:" << endl;
			cout << "Either you could go with the " << v3.desc() << ". It has a milage of " << v3.milage() << " and a hourly price of " << v3.price() <<" Dollars/hour" << endl;
			cout << "Or you could go with the " << v1.desc() << ". It has a milage of " << v1.milage() << " and a hourly price of " << v1.price() << " Dollars/hour" << endl;
			cout << "We have a total of ";
			v1.printNumber();
			cout << v1.desc() << "  for rental" << endl;
			cout << "And a total of ";
			v3.printNumber();
			cout << v3.desc() << "  for rental" << endl;
			cout << "Would you like to rent the " << v1.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser;
			if (awnser == 1)
			{
				cout << "Great! " << v1.desc() << " will be awaiable to pick up soon." << endl;
				v1.reduceValue();
				cout << "We now have: ";
				v1.printNumber();
				cout << v1.desc() << "  for rental" << endl;

			}
			else if (awnser == 2)
			{
				cout << "Ok, ";
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
			cout << "Would you like to rent the " << v3.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser2;
			if (awnser2 == 1)
			{
				cout << "Great! " << v3.desc() << " will be awaiable to pick up soon." << endl;
				v3.reduceValue();
				cout << "We now have: ";
				v3.printNumber();
				cout << v3.desc() << "  for rental" << endl;

			}
			else if (awnser2 == 2)
			{
				cout << "Ok, sorry to hear that, well have a nice day, and I hope we can help you in the future." << endl;
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
		}
		else if (milage >= v3.milage() && milage < v2.milage() && v1.count > 0 && v3.count < 1) //funkar
		{
			int awnser;
			cout << "We found just the right car for you:" << endl;
			cout << "The: " << v1.desc() << " fits all your needs. It's milage is: " << v1.milage() << endl;
			cout << "And the hourly price is " << v1.price() << " Dollars / hour of rental" << endl;
			cout << "We have a total of ";
			v1.printNumber();
			cout << v1.desc() << "  for rental" << endl;
			cout << "Would you like to rent the " << v1.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser;
			if (awnser == 1)
			{
				cout << "Great! " << v1.desc() << " will be awaiable to pick up soon." << endl;
				v1.reduceValue();
				cout << "We now have: ";
				v1.printNumber();
				cout << v1.desc() << "  for rental" << endl;

			}
			else if (awnser == 2)
			{
				cout << "Ok, sorry to hear that, well have a nice day, and I hope we can help you in the future." << endl;
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
		}
		else if (milage >= v3.milage() && milage < v2.milage() && v1.count < 1 && v3.count > 0) //funkar
		{
			int awnser;
			cout << "We found just the right car for you:" << endl;
			cout << "The: " << v3.desc() << " fits all your needs. It's milage is: " << v3.milage() << endl;
			cout << "And the hourly price is " << v3.price() << " Dollars / hour of rental" << endl;
			cout << "We have a total of ";
			v3.printNumber();
			cout << v3.desc() << "  for rental" << endl;
			cout << "Would you like to rent the " << v3.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser;
			if (awnser == 1)
			{
				cout << "Great! " << v3.desc() << " will be awaiable to pick up soon." << endl;
				v3.reduceValue();
				cout << "We now have: ";
				v3.printNumber();
				cout << v3.desc() << "  for rental" << endl;

			}
			else if (awnser == 2)
			{
				cout << "Ok, sorry to hear that, well have a nice day, and I hope we can help you in the future." << endl;
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
		}
		else if (milage >= v2.milage() && v1.count > 0 && v2.count > 0 && v3.count >0)
		{
			int awnser, awnser2, awnser3;
			cout << "We have 3 cars to reccomend:" << endl;
			cout << "Either you could go with the " << v3.desc() << ". It has a milage of " << v3.milage() << " and a hourly price of " << v3.price() << " Dollars/hour" << endl;
			cout << "Or you could go with the " << v2.desc() << ". It has a milage of " << v2.milage() << " and a hourly price of " << v2.price() << " Dollars/hour" << endl;
			cout << "Or you could go with out third option " << v1.desc() << ". It has a milage of " << v1.milage() << " and a hourly price of " << v1.price() << " Dollars/hour" << endl;
			cout << "We have a total of ";
			v1.printNumber();
			cout << v1.desc() << "  for rental" << endl;
			cout << "And a total of ";
			v2.printNumber();
			cout << v2.desc() << "  for rental" << endl;
			cout << "And a total of ";
			v3.printNumber();
			cout << v3.desc() << "  for rental" << endl;
			cout << "Would you like to rent the " << v1.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser;
			if (awnser == 1)
			{
				cout << "Great! " << v1.desc() << " will be awaiable to pick up soon." << endl;
				v1.reduceValue();
				cout << "We now have: ";
				v1.printNumber();
				cout << v1.desc() << "  for rental" << endl;

			}
			else if (awnser == 2)
			{
				cout << "Ok, ";
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
			cout << "Would you like to rent the " << v2.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser2;
			if (awnser2 == 1)
			{
				cout << "Great! " << v2.desc() << " will be awaiable to pick up soon." << endl;
				v2.reduceValue();
				cout << "We now have: ";
				v2.printNumber();
				cout << v2.desc() << "  for rental" << endl;

			}
			else if (awnser2 == 2)
			{
				cout << "Ok, ";
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
			cout << "Would you like to rent the " << v3.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser3;
			if (awnser3 == 1)
			{
				cout << "Great! " << v3.desc() << " will be awaiable to pick up soon." << endl;
				v3.reduceValue();
				cout << "We now have: ";
				v3.printNumber();
				cout << v3.desc() << "  for rental" << endl;

			}
			else if (awnser3 == 2)
			{
				cout << "Ok, have a great day" << endl;
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
		}
		else if (milage >= v2.milage() && v1.count < 1 && v2.count > 0 && v3.count > 0)
		{
			int awnser, awnser2;
			cout << "We have 2 cars to reccomend:" << endl;
			cout << "Either you could go with the " << v3.desc() << ". It has a milage of " << v3.milage() << " and a hourly price of " << v3.price() << " Dollars/hour" << endl;
			cout << "Or you could go with the " << v2.desc() << ". It has a milage of " << v2.milage() << " and a hourly price of " << v2.price() << " Dollars/hour" << endl;
			cout << "We have a total of ";
			v2.printNumber();
			cout << v2.desc() << "  for rental" << endl;
			cout << "And a total of ";
			v3.printNumber();
			cout << v3.desc() << "  for rental" << endl;
			cout << "Would you like to rent the " << v2.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser;
			if (awnser == 1)
			{
				cout << "Great! " << v2.desc() << " will be awaiable to pick up soon." << endl;
				v2.reduceValue();
				cout << "We now have: ";
				v2.printNumber();
				cout << v2.desc() << "  for rental" << endl;

			}
			else if (awnser == 2)
			{
				cout << "Ok, ";
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
			cout << "Would you like to rent the " << v3.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser2;
			if (awnser2 == 1)
			{
				cout << "Great! " << v3.desc() << " will be awaiable to pick up soon." << endl;
				v3.reduceValue();
				cout << "We now have: ";
				v3.printNumber();
				cout << v3.desc() << "  for rental" << endl;

			}
			else if (awnser2 == 2)
			{
				cout << "Ok, sorry to hear that, well have a nice day, and I hope we can help you in the future." << endl;
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}

		}
		else if (milage >= v2.milage() && v1.count > 0 && v2.count < 1 && v3.count > 0)
		{
			int awnser, awnser2;
			cout << "We have 2 cars to reccomend:" << endl;
			cout << "Either you could go with the " << v3.desc() << ". It has a milage of " << v3.milage() << " and a hourly price of " << v3.price() << " Dollars/hour" << endl;
			cout << "Or you could go with the " << v1.desc() << ". It has a milage of " << v1.milage() << " and a hourly price of " << v1.price() << " Dollars/hour" << endl;
			cout << "We have a total of ";
			v1.printNumber();
			cout << v1.desc() << "  for rental" << endl;
			cout << "And a total of ";
			v3.printNumber();
			cout << v3.desc() << "  for rental" << endl;
			cout << "Would you like to rent the " << v1.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser;
			if (awnser == 1)
			{
				cout << "Great! " << v1.desc() << " will be awaiable to pick up soon." << endl;
				v1.reduceValue();
				cout << "We now have: ";
				v1.printNumber();
				cout << v1.desc() << "  for rental" << endl;

			}
			else if (awnser == 2)
			{
				cout << "Ok, ";
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
			cout << "Would you like to rent the " << v3.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser2;
			if (awnser2 == 1)
			{
				cout << "Great! " << v3.desc() << " will be awaiable to pick up soon." << endl;
				v3.reduceValue();
				cout << "We now have: ";
				v3.printNumber();
				cout << v3.desc() << "  for rental" << endl;

			}
			else if (awnser2 == 2)
			{
				cout << "Ok, sorry to hear that, well have a nice day, and I hope we can help you in the future." << endl;
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
		}
		else if (milage >= v2.milage() && v1.count > 0 && v2.count < 0 && v3.count < 1)
		{
			int awnser, awnser2;
			cout << "We have 2 cars to reccomend:" << endl;
			cout << "Either you could go with the " << v2.desc() << ". It has a milage of " << v2.milage() << " and a hourly price of " << v2.price() << " Dollars/hour" << endl;
			cout << "Or you could go with the " << v1.desc() << ". It has a milage of " << v1.milage() << " and a hourly price of " << v1.price() << " Dollars/hour" << endl;
			cout << "We have a total of ";
			v1.printNumber();
			cout << v1.desc() << "  for rental" << endl;
			cout << "And a total of ";
			v3.printNumber();
			cout << v2.desc() << "  for rental" << endl;
			cout << "Would you like to rent the " << v1.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser;
			if (awnser == 1)
			{
				cout << "Great! " << v1.desc() << " will be awaiable to pick up soon." << endl;
				v1.reduceValue();
				cout << "We now have: ";
				v1.printNumber();
				cout << v1.desc() << "  for rental" << endl;

			}
			else if (awnser == 2)
			{
				cout << "Ok, ";
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
			cout << "Would you like to rent the " << v2.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser2;
			if (awnser2 == 1)
			{
				cout << "Great! " << v2.desc() << " will be awaiable to pick up soon." << endl;
				v2.reduceValue();
				cout << "We now have: ";
				v2.printNumber();
				cout << v2.desc() << "  for rental" << endl;

			}
			else if (awnser2 == 2)
			{
				cout << "Ok, sorry to hear that, well have a nice day, and I hope we can help you in the future." << endl;
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
		}
		else if (milage >= v2.milage() && v1.count > 0 && v2.count < 1 && v3.count < 1)
		{
			int awnser;
			cout << "We found just the right car for you:" << endl;
			cout << "The: " << v1.desc() << " fits all your needs. It's milage is: " << v1.milage() << endl;
			cout << "And the hourly price is " << v1.price() << " Dollars / hour of rental" << endl;
			cout << "We have a total of ";
			v1.printNumber();
			cout << v1.desc() << "  for rental" << endl;
			cout << "Would you like to rent the " << v1.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser;
			if (awnser == 1)
			{
				cout << "Great! " << v1.desc() << " will be awaiable to pick up soon." << endl;
				v1.reduceValue();
				cout << "We now have: ";
				v1.printNumber();
				cout << v1.desc() << "  for rental" << endl;

			}
			else if (awnser == 2)
			{
				cout << "Ok, sorry to hear that, well have a nice day, and I hope we can help you in the future." << endl;
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
		}
		else if (milage >= v2.milage() && v1.count < 1 && v2.count > 0 && v3.count < 1)
		{
			int awnser;
			cout << "We found just the right car for you:" << endl;
			cout << "The: " << v2.desc() << " fits all your needs. It's milage is: " << v2.milage() << endl;
			cout << "And the hourly price is " << v2.price() << " Dollars / hour of rental" << endl;
			cout << "We have a total of ";
			v2.printNumber();
			cout << v2.desc() << "  for rental" << endl;
			cout << "Would you like to rent the " << v2.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser;
			if (awnser == 1)
			{
				cout << "Great! " << v2.desc() << " will be awaiable to pick up soon." << endl;
				v2.reduceValue();
				cout << "We now have: ";
				v2.printNumber();
				cout << v2.desc() << "  for rental" << endl;

			}
			else if (awnser == 2)
			{
				cout << "Ok, sorry to hear that, well have a nice day, and I hope we can help you in the future." << endl;
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
		}
		else if (milage >= v2.milage() && v1.count < 1 && v2.count < 1 && v3.count > 0)
		{
			int awnser;
			cout << "We found just the right car for you:" << endl;
			cout << "The: " << v3.desc() << " fits all your needs. It's milage is: " << v3.milage() << endl;
			cout << "And the hourly price is " << v3.price() << " Dollars / hour of rental" << endl;
			cout << "We have a total of ";
			v3.printNumber();
			cout << v3.desc() << "  for rental" << endl;
			cout << "Would you like to rent the " << v3.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser;
			if (awnser == 1)
			{
				cout << "Great! " << v3.desc() << " will be awaiable to pick up soon." << endl;
				v3.reduceValue();
				cout << "We now have: ";
				v3.printNumber();
				cout << v3.desc() << "  for rental" << endl;

			}
			else if (awnser == 2)
			{
				cout << "Ok, sorry to hear that, well have a nice day, and I hope we can help you in the future." << endl;
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
		}
	}
	else if (a == 4)
	{
		if (milage >= v3.milage() && v3.count > 0)
		{
			int awnser;
			cout << "We found just the right car for you:" << endl;
			cout << "The: " << v3.desc() << " fits all your needs. It's milage is: " << v3.milage() << endl;
			cout << "And the hourly price is " << v3.price() << " Dollars / hour of rental" << endl;
			cout << "Would you like to rent the " << v3.desc() << " (type 1 for yes or 2 for no)";
			cin >> awnser;
			if (awnser == 1)
			{
				cout << "Great! " << v3.desc() << " will be awaiable to pick up soon." << endl;
				v3.reduceValue();
				cout << "We now have: ";
				v3.printNumber();
				cout << v3.desc() << "  for rental" << endl;

			}
			else if (awnser == 2)
			{
				cout << "Ok, have a great day" << endl;
			}
			else
			{
				cout << "Sorry wrongful input" << endl;
			}
		}
		else
		{
			cout << "Sorru We don't have any cars that fills all those specifications" << endl;
		}
	}
	else
	{
		
		cout << "hmmm weird" << endl;
	}
}