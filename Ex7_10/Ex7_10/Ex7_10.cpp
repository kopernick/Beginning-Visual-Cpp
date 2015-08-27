// Ex7_10.cpp
// Using the pointer this
#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;
class CBox // Class definition at global scope
{
public:					 /// Constructor definition 
	explicit CBox(double lv = 1.0, double bv = 1.0, double hv = 1.0) :m_Length(lv), m_Width(bv), m_Height(hv)
	{
		cout << endl << "Constructor called.";
	}
	explicit CBox(double side) :m_Length(side), m_Width(side), m_Height(side)
	{
		cout << endl << "Cube Constructor called.";
	}

	// Function to calculate the volume of a box
	double Volume() const
	{
		return m_Length* m_Width* m_Height;
	}
	
	//Function to campare two boxes which returs true
	// if the first is greater than second, and false otherwise
	bool Compare(CBox& xBox)
	{
		return this->Volume() > xBox.Volume();
	}

private: //Private data members access avialable for methode
	double m_Length; // Length of a box in inches
	double m_Width; // Width of a box in inches
	double m_Height; // Height of a box in inches
};

int main()
{
	CBox match(2.2, 1.1, .5); // Declare and initialize match
	CBox cigarBox(8.0, 5.0, 1.0); // Declare and initialize cigarBox
	
	if (cigarBox.Compare(match))
	{
		cout << endl
			 << "match is smaller than cigarBox";
	}
	else
	{
		cout << endl
			 << "match is equal or larger than cigarBox";
	}
	cout << endl;
		
	return 0;
}
