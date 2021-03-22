//
// Created by asiia on 20.03.2021.
//

#include "Guest.h"
std::vector<Guest> Guest::ListOfGuests;
Guest::Guest(const string &firstName, const string &lastName) : Users(firstName, lastName,  BLUE) {
    ListOfGuests.push_back(*this);
}