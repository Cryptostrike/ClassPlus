#include "hand.h"
#include <iostream>

using namespace std;

// class constructor
hand::hand()
{
    // Print out a line when a new object from this class has been created
    cout << "I have created a new object!" << endl;

    publiclemon = 3; // Public int

    privatelime = 4; // Private int

    privatestring = "bob"; // Private string
}


// Public function to access the private variable outside the class
int hand::get_privatelime(){

    int got_privatelime = privatelime;

    return got_privatelime;

}

// Public function to change the private variable outside the class
void hand::give_privatelime(int gave_privatelime){
    privatelime = gave_privatelime;
}


// Public function to access the private variable outside the class
string hand::get_privatestring(){

    string got_privatestring = privatestring;

    return got_privatestring;

}
