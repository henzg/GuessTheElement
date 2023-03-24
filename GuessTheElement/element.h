#pragma once
#include <string>
#include <vector>
#include <iostream>

class Element
{
public:
	// Element constructed with attributes already
	Element();
	Element(std::string eName, std::string eSymbol, std::string eState, std::string eSeries, unsigned short int eAtomicNumber, double eAtomicWeight) : name(eName), symbol(eSymbol), state(eState), series(eSeries), atomicNumber(eAtomicNumber), atomicWeight(eAtomicWeight) {};
	~Element();
	
	// getter for element attributes
	std::string const getName();
	std::string const getSymbol();
	std::string const getState();
	std::string const getSeries();
	unsigned short int const getAtomicNumber();
	double const getAtomicWeight();

	// member functions
	[5] Element listOfElements();

private:
	std::string name, symbol, state, series;
	unsigned short int atomicNumber;
	double atomicWeight;
};

