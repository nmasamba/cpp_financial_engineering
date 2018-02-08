
/***********************************************************************

Test program for European option pricing
(c) Datasim Education Technology BV 2003
Amended and corrected by Nyasha Masamba

***********************************************************************/


#include "EuropeanOption.hpp"
#include "EuropeanOption.cpp"

#include <iostream>
using namespace std;


int main() {

	// Note: all options are European

	// instantiate EuropeanOption object called callOption
	// callOption object is a call option on a stock
	EuropeanOption callOption;
	// callOption.optType = "C"; 
	cout << "Call option on a stock: " << callOption.Price() << endl;

	// indexOption object is a put option on a stock index
	EuropeanOption indexOption;
	indexOption.optType = "P";
	indexOption.U = 100.0;
	indexOption.K = 95.0;
	indexOption.T = 0.5;
	indexOption.r = 0.10;
	indexOption.sig = 0.20;

	double q = 0.05; // Dividend yield
	indexOption.b = indexOption.r - q;
	cout << "Put option on index: " << indexOption.Price() << endl;

	// futureOption object returns both call and put option prices on a future
	// First price a put on the option
	EuropeanOption futureOption;
	futureOption.optType = "P";
	futureOption.U = 19.0;
	futureOption.K = 19.0;
	futureOption.T = 0.75;
	futureOption.r = 0.10;
	futureOption.sig = 0.28;
	futureOption.b = 0.0;
	cout << "Put option on a future: " << futureOption.Price() << endl;

	// Change over to a call on the option
	futureOption.toggle();
	cout << "Call on future: " << futureOption.Price() << endl;

	return 0;

}