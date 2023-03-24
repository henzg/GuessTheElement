// GuessTheElement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "element.h"
#include "MapDeElements.h"


int main()
{

    std::map<std::string, Element*> m;

    

    Element e("Zacaranium", "Za", "Solid", "Series", 6969, 420.421);
    Element d("Dracaranium", "Dr", "Solid", "Series", 205, 56.421);

    //std::cout << "My Element's name is: " << e.getName();
    
    m.insert(std::make_pair("Zacaranium", new Element("Zacaranium", "Za", "Solid", "Series", 6969, 420.421)));
    m.insert(std::make_pair("Dracaranium", new Element("Dracaranium", "Za", "Solid", "Series", 6969, 420.421)));
    new Element("Hydrogen", "H", "Gas", "Series", 1, 1.004);



    std::cout << "My Element's Atomic Number: " << m["Dracaranium"]->getAtomicNumber();

    // searching for K - does it exist - y, v = serices m[k]=v, k 

    return 0;
}

