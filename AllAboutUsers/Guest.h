//
// Created by asiia on 20.03.2021.
//

#ifndef ASSIGNMENT2_GUEST_H
#define ASSIGNMENT2_GUEST_H

#include "Users.h"

class Guest: public Users {
public: static vector <Guest> ListOfGuests;
    Guest(const string &firstName, const string &lastName);
};


#endif //ASSIGNMENT2_GUEST_H
