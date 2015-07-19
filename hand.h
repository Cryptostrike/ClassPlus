#include <string>
#ifndef HAND_H
#define HAND_H

using namespace std;

// Declare a new class called hand
class hand
{
    // Can be accessed anywhere inside and outside the class
    public:

        // Declares hand construction function which sets the variables and actions
        // to take when each new object is created
        hand();

        // Declares variable public prototype
        int publiclemon;

        // Declares public function prototype to return private variable
        int get_privatelime();

        // Declares public function prototype to return private string variable
        string get_privatestring();

        // Declares public function prototype to change the private variable
        void give_privatelime(int gave_privatelime);


    // Can only be accessed within the class
    private:
        // To access from outside the class you need to use the public function get_privatelime();
        int privatelime;

        // Declares private string
        string privatestring;
};

#endif // HAND_H
