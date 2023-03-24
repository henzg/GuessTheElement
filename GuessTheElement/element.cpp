#include "element.h"

std::string const Element::getName() {
    return name;
}

std::string const Element::getSymbol() {
    return symbol;
}

std::string const Element::getState() {
    return state;
}
std::string const Element::getSeries() {
    return series;
}

unsigned short int const Element::getAtomicNumber() {
    return atomicNumber;
}

double const Element::getAtomicWeight() {
    return atomicWeight;
}

[5] Element Element::listOfElements() {
    Element[2]arrayElements; (
        new Element("Hydrogen", "H", "Gas", "Series", 1, 1.004),
        new Element("Hydrogen", "H", "Gas", "Series", 1, 1.004)
    );
}