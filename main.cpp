/****************************************************************
* This is a simple implementation of a C++ class                *
* Cryptostrike - https://github.com/Cryptostrike                *
*****************************************************************/

#include "hand.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Creates a new object called handobject from the class hand
    hand handobject;

    // Prints the public variable publiclemon from the handobject
    cout << "publiclemon = " << handobject.publiclemon << endl;

    // Uses the public function get_privatelemon to return the value of the private variable called privatelemon
    cout << "privatelime = " << handobject.get_privatelime() << endl;

    // Uses the public function get_privatestring to return the value of the private string called privatestring
    cout << "privatestring = " << handobject.get_privatestring() << endl;


    cout << "privatelime has just been updated!" << endl;


    // Use the public function to assign a new value to the privatelime variable
    handobject.give_privatelime(20);

    // Reprint privatelime to see the new value
    cout << "Updated privatelime = " << handobject.get_privatelime() << endl;

    return 0;
}
