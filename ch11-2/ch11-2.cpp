#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
private:
	double miles_per_gallon = 0;
public:
	Vehicle() {}
	Vehicle(double m) { miles_per_gallon = m; }
	void display()
	{
		cout << "miles_per_gallon = " << miles_per_gallon << endl;
	}
};

class Home
{
private:
	int square_ft = 0;
public:
	Home() {}
	Home(int s) { square_ft = s; }
	void display()
	{
		cout << "square_ft = " << square_ft << endl;
	}
};

class RV : public Vehicle, Home
{
private:
public:
	RV() {}
	RV(double m, int s) : Vehicle(m), Home(s) {}
	void display()
	{
		Vehicle::display();
		Home::display();
	}
};

int main()
{
	RV rv(11, 300);
	rv.display();
	return 0;
}