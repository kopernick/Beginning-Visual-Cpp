// Ex7_04.cpp
// Using a constructor
#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;
class CBox // Class definition at global scope
{
public:					 /// Constructor definition 
	explicit CBox(double lv = 1.0, double bv = 1.0, double hv = 1.0):m_Length(lv), m_Width(bv), m_Height(hv)
	{ 
		cout << endl << "Constructor called."; 
	} 
	explicit CBox(double side):m_Length(side), m_Width(side), m_Height(side)
	{
		cout << endl << "Cube Constructor called.";
	}

	// Function to calculate the volume of a box
	double Volume()
	{
		return m_Length* m_Width* m_Height;
	}

private: //Private data members access avialable for methode
	double m_Length; // Length of a box in inches
	double m_Width; // Width of a box in inches
	double m_Height; // Height of a box in inches
};
int main()
{
	CBox box1(78.0, 24.0, 18.0); // Declare and initialize box1
	CBox cigarBox(8.0, 5.0, 1.0); // Declare and initialize cigarBox
	CBox box2;				// Declare and don't initialize box2
	//box2 = 10.0;
	double boxVolume(0.0); // Stores the volume of a box
	boxVolume = box1.Volume(); // Calculate volume of box1
	cout << endl
		<< "Volume of box1 = " << boxVolume;
	cout << endl
		<< "Volume of cigarBox = "
		<< cigarBox.Volume();
	cout << endl;

	cout << "Volume of box2 = " << box2.Volume();
	return 0;
}