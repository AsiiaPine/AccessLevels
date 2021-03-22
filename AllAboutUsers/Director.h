//
// Created by asiia on 07.03.2021.
//

#ifndef ASSIGNMENT2_DIRECTOR_H
#define ASSIGNMENT2_DIRECTOR_H

#include "Users.h"
#include "WhatCoffeToBring.h"
#include "../AllAboutRooms/DirectorCab.h"

class Director: public Users {
public:

    Director(const string &firstName, const string &lastName, DirectorCab *bossCabinet,
             WhatCoffeeToBring lovelyCoffee);

private:
    DirectorCab* BossCabinet;
    WhatCoffeeToBring lovelyCoffee;
};

#endif //ASSIGNMENT2_DIRECTOR_H
