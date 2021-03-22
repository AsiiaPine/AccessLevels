//
// Created by asiia on 07.03.2021.
//

#ifndef ASSIGNMENT2_DIRECTORCAB_H
#define ASSIGNMENT2_DIRECTORCAB_H


#include "Room.h"

class DirectorCab: public Room {
public:

    DirectorCab(int numberOfSits, bool isItBetterThanSucciCabinet, int floor);
    static const :: TypeOfTheRoom type=DIRECTOR_CAB;
    bool IsItBetterThanSucciCabinet;
   //void PrintTheRoom() override;
};


#endif //ASSIGNMENT2_DIRECTORCAB_H
