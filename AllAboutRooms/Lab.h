//
// Created by asiia on 07.03.2021.
//

#ifndef ASSIGNMENT2_LAB_H
#define ASSIGNMENT2_LAB_H
#include "../AccessLevel.h"
#include "Room.h"
#include "../Labs.h"

class Lab: public Room {
public:
    Lab(int numberOfSits, Labs nameOfTheLab, int floor);
    static std::vector<Lab*> ListOfLabs;
    static const :: TypeOfTheRoom type=LAB;
private:
    Labs NameOfTheLab;
};


#endif //ASSIGNMENT2_LAB_H
